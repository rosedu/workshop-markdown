# Linkare dinamică

Linkarea dinamică înseamnă că în executabil nu sunt incluse componentele folosite din bibliotecă.  
Acestea vor fi incluse mai târziu, la încărcare (*load time*) sau chiar la rulare (*runtime*).  

În urma linkării dinamice, executabilul reține referințe la bibliotecile folosite și la simbolurile din cadrul acestora.  
Aceste referințe sunt similare unor simboluri nedefinite.  
Rezolvarea lor are loc mai târziu, prin folosirea unui loader / linker dinamic.

Așadar, în cazul linkării dinamice, aspecte precum rezolvarea simbolurilor sau stabilirea adreselor nu sunt efectuate pentru simbolurile bibliotecilor.

---

În directorul `06-dynamic/` avem un conținut similar directorului `05-static/`.  
Diferența este că acum folosim linkare dinamică în loc de linkare statică pentru biblioteca standard C.  
Pentru aceasta, am renunțat la argumentul `-static` folosit la linkare.

Pentru acest exemplu, obținem un singur executabil `main`, din legarea statică cu biblioteca `libinc.a` și legarea dinamică cu biblioteca standard C.  
Similar exemplului din directorul `05-static/`, folosim comanda `make` pentru a obține executabilul `main`:

```console
[..]/06-dynamic$ ls
inc.c  inc.h  main.c  Makefile

[..]/06-dynamic$ make
cc -fno-PIC -m32 -c -o main.o main.c
cc -fno-PIC -m32 -c -o inc.o inc.c
ar rc libinc.a inc.o
cc -no-pie -m32 -L. -o main main.o -linc

[..]/06-dynamic$ ls
inc.c  inc.h  inc.o  libinc.a  main  main.c  main.o  Makefile

[..]/06-dynamic$ file main
main: ELF 32-bit LSB executable, Intel 80386, dynamically linked, interpreter /lib/ld-linux.so.2
