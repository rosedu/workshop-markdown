# Linkare dinamica

Linkarea dinamica inseamna ca in executabil nu sunt incluse componentele folosite din biblioteca.
Acestea vor fi incluse mai tarziu, la incarcare (*load time*) sau chiar la rulare (*runtime).
in urma linkarii dinamice, executabilul retine referinte la bibliotecile folosite si la simbolurile folosite din cadrul acestora.
Aceste referinte sunt similare unor simboluri nedefinite.
Rezolvarea acestor simboluri are loc mai tarziu, prin folosirea unui loader / linker dinamic.

Asadar, in cazul linkarii dinamice, aspecte precum rezolvarea simbolurilor sau stabilirea adreselor nu sunt efectuate pentru simbolurile bibliotecilor.

in directorul `06-dynamic/` avem un continut similar directorului `05-static/`.
Diferenta este ca acum, folosim linkare dinamica in loc de linkare statica pentru biblioteca standard C.
Pentru aceasta, am renuntat la argumentul `-static` folosit la linkare.

Pentru acest exemplu, obtinem un singur executabil `main`, din legarea statica cu biblioteca `libinc.a` si legarea dinamica cu biblioteca standard C.
Similar exemplului din directorul `05-static/, folosim comanda `make` pentru a obtine executabilul `main`:

```console
[..]/06-dynamic$ ls
inc.c  inc.h  main.c  Makefile

[..]/06-dynamic$ make
cc -fno-PIC -m32   -c -o main.o main.c
cc -fno-PIC -m32   -c -o inc.o inc.c
ar rc libinc.a inc.o
cc -no-pie -m32 -L. -o main main.o -linc

[..]/06-dynamic$ ls
inc.c  inc.h  inc.o  libinc.a  main  main.c  main.o  Makefile

[..]/06-dynamic$ ls -l main
-rwxr-xr-x 1 razvan razvan 7272 Jan 17 17:42 main

[..]/06-dynamic$ ./main
num_items: 1

[..]/06-dynamic$ file main
main: ELF 32-bit LSB executable, Intel 80386, version 1 (SYSV), dynamically linked, interpreter /lib/ld-linux.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=8d99d4600dc70919266f4063da1eaf8ff9ce96e1, not stripped

[..]/06-dynamic$ file ../05-static/main
../05-static/main: ELF 32-bit LSB executable, Intel 80386, version 1 (GNU/Linux), statically linked, for GNU/Linux 3.2.0, BuildID[sha1]=60adf8390374c898998c0b713a8b1ea0c255af38, not stripped
``

Fisierul executabil `main` obtinut prin linkare dinamica are un comportament identic fisierului executabil `main` obtinut prin linkare statica.
Observam ca dimensiunea sa este mult mai redusa: ocupa `7 KB` comparativ cu `600 KB` cat avea varianta sa statica.
De asemenea, folosind utilitarul `file`, aflam ca este executabil obtinut prin linkare dinamica (*dynamically linked*), in vreme cel obtinut in exemplul anterior este executabil obtinut prin linkare statica (*statically linked).

Investigam simbolurile executabilului:

```console
[..]/06-dynamic$ nm main
[...]
0804848c T increment
0804847c T init
[...]
         U __libc_start_main@@GLIBC_2.0
08048446 T main
0804a020 b num_items
080484a9 T print
         U printf@@GLIBC_2.0
0804849f T read
[...]
08048330 T _start
[...]
```

Simbolurile obtinute din modulul obiect `main.o` si din biblioteca statica `libinc.o` sunt rezolvate si au adrese stabilite.
Observam ca folosirea bibliotecii standard C a dus la existenta simboblului `_start`, care este entry pointul programului.
Dar, simbolurile din biblioteca standard C, (`printf`, __libc_start_main`) sunt marcate ca nedefinite (`U`).
Aceste simboluri nu sunt prezente in executabil: rezolvarea, stabilirea adreselor si relocarea lor se va realiza mai tarziu, la incarcare (load time).

La incarcare, o alta componenta software a sistemului, loaderul / linkerul dinamic, se va ocupa de:

- localizarea in sistemul de fisiere a fisierelor biblioteca dinamice care sunt folosite de fisierul executabil incarcat
- incarcarea in memorie a acelor biblioteci dinamice, lucru care duce si la stabilirea adreselor simbolurilor din biblioteca
- parcurgerea simbolurilor nedefinite din cadrul fisierului executabil, localizarea lor in biblioteca inacarcata dinamic si relocarea lor in executabilul incarcat in memorie

Putem investiga bibliotecile dinamice folosite de un executabil prin intermediul utilitarului `ldd`:

``console
[..]/06-dynamic$ ldd main
	linux-gate.so.1 (0xf7f97000)
	libc.so.6 => /lib/i386-linux-gnu/libc.so.6 (0xf7d8a000)
	/lib/ld-linux.so.2 (0xf7f98000)
```
in rezultatul de mai sus, observam ca executabilul foloseste biblioteca standard C, localizata la calea `/lib/i386-linux-gnu/libc.so.6`.
`/lib/ld-linux.so.2` este loaderul / linkerul dinamic.
`linux-gate.so.1` e o componenta specifica Linux pe care nu vom insista.

Pe langa dimensiunea redusa a executabilelor, marele avantaj al folosirii linkarii dinamice, este ca se pot partaja sectiunile de cod (nu de date) ale bibliotecilor dinamice.
Cand un executabil dinamic este incarcat, se identifica bibliotecile dinamice de care acesta depinde.
Daca o biblioteca dinamica deja exista in memorie, se face referire direct la zona existenta, partajand astfel biblioteca dinamica.
Acest lucru conduce la o reducere semnificativa a memoriei ocupate de aplicatiile sistemului.
10 aplicatii care folosesc, probabil toate, biblioteca standard C, vor partaja codul bibliotecii.

Din acest motiv, bibliotecile dinamice mai sunt numite si obiecte partajate (*shared objects*).
De aici este, in Linux, extensia `.so` a fisierelor de tip biblioteca partajata.

## Biblioteci cu linkare dinamica

Numele corect al unei biblioteci dinamice este biblioteca cu linkare dinamica (*dynamically linked library*) sau biblioteca partajata.
in Windows, bibliotecile dinamice sunt numite *dynamic-link libraries* de unde si extensia `.dll`.

Din punctul de vedere al comenzii folosite, nu difera linkarea unei biblioteci dinamice sau a unei biblioci statice.
Difera executabilul obtinut, care va avea nedefinite simbolurile folosite din bibliotecile dinamice.
De asemenea, loaderul / linkerul dinamic trebuie sa fie informat de locul bibliotecii dinamice.

in directorul `07-dynlib/` avem un continut similar directorului `06-dynamic/`.
Diferenta este ca acum, folosim linkare dinamica in loc de linkare statica si pentru a include functionalitatea `inc.c`, nu doar pentru biblioteca standard C.
Pentru aceasta, construim fisierul biblioteca partajata `libinc.so`, in locul fisierului biblioteca statica `libibc.a`.

Similar exemplului din directorul `06-dynamic/`, folosim comanda `make` pentru a obtine executabilul `main`:

```console
[..]/07-dynlib$ ls
inc.c  inc.h  main.c  Makefile

[..]/07-dynlib$ make
cc -fno-PIC -m32   -c -o main.o main.c
cc -fno-PIC -m32   -c -o inc.o inc.c
cc -m32 -shared -o libinc.so inc.o
cc -no-pie -m32 -L. -o main main.o -linc

[..]/07-dynlib$ ls
inc.c  inc.h  inc.o  libinc.so  main  main.c  main.o  Makefile

[..]/07-dynlib$ ls -l main
-rwxr-xr-x 1 razvan razvan 7200 Jan 17 18:11 main

[..]/07-dynlib$ nm main
[...]
         U increment
         U init
080483ac T _init
[...]
         U __libc_start_main@@GLIBC_2.0
08048556 T main
         U print
         U read
[...]
08048440 T _start
```

Executabilul obtinut are dimensiunea in jur de `7 KB` putin mai mica decat a executabilului din exemplul anterior.
Diferenta cea mai mare este ca, acum, simbolurile din biblioteca `libinc.so` (`increment`, `init`, `print`, `read`) sunt nerezolvate.

Daca incercam lansarea in executie a executabilului, observam ca primim o eroare:

```console
[..]/07-dynlib$ ./main
./main: error while loading shared libraries: libinc.so: cannot open shared object file: No such file or directory
```

Eroarea spune ca nu poate localiza biblioteca `libinc.so` la incarcare (*loading*).
Este deci, o eroare de loader.

O eroare similara obtinem daca folosim utilitarul `ldd`:

```console
[..]/07-dynlib$ ldd ./main
	linux-gate.so.1 (0xf7f9f000)
	libinc.so => not found
	libc.so.6 => /lib/i386-linux-gnu/libc.so.6 (0xf7d92000)
	/lib/ld-linux.so.2 (0xf7fa0000)
```

La fel, biblioteca `libinc.so` nu este gasita.

Motivul este ca nu am precizat loaderului unde sa caute biblioteca partajata.
Loaderul are definita calea unde sa caute biblioteca standard C (`/lib/i386-linux-gnu/libc.so.6`), dar nu detine informatii despre `libinc.so`.

Ca sa precizam loaderului calea catre biblioteca, o cale simpla, de test, este folosirea variabilei de mediu `LD_LIBRARY_PATH`, pe care o initializam la directorul curent (`.` - *dot*).
Odata folosita variabila de mediu `LD_LIBRARY_PATH`, lansarea in executie a executabilului va functiona, la fel si folosirea `ldd`:

```console
[..]/07-dynlib$ LD_LIBRARY_PATH=. ldd ./main
	linux-gate.so.1 (0xf7eda000)
	libinc.so => ./libinc.so (0xf7ed2000)
	libc.so.6 => /lib/i386-linux-gnu/libc.so.6 (0xf7cca000)
	/lib/ld-linux.so.2 (0xf7edb000)

[..]/07-dynlib$ LD_LIBRARY_PATH=. ./main
num_items: 1
```

Variabila de mediu `LD_LIBRARY_PATH` pentru loader este echivalentul optiunii `-L` in comanda de linkare: precizeaza directoarele in care sa fie cautate biblioteci pentru a fi incarcate, respectiv linkate.
Folosirea variabilei de mediu `LD_LIBRARY_PATH` este recomandata pentru teste.
Pentru o folosire robusta, exista alte mijloace de precizare a cailor de cautare a bibliotecilor partajate, documentate in (pagina de manual a loaderului / linkerului dinamic)(https://man7.org/linux/man-pages/man8/ld.so.8.html#DESCRIPTION).
