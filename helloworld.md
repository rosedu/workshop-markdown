# Helloworld Programs

![Hello World Image](./helloworld.png)

Mai jos sunt listate programe "Hello, World!" pentru mai multe limbaje de programare, împreună cu instrucțiuni minimale de build/run și pachete/toolchain sugerate.

---

## Tabel sumar

| Limbaj | Specificație / Site | Build / Run (exemplu) | Toolchain / Pachete recomandate |
|---|---:|---|---|
| C | The Standard — ISO C | gcc -Wall -o helloworld helloworld.c → ./helloworld | build-essential (Debian/Ubuntu) |
| C++ | The Standard — ISO C++ | g++ -Wall -o helloworld helloworld.cpp → ./helloworld | build-essential, g++ |
| D | D Programming Language | dmd helloworld.d → ./helloworld (sau gdc) | dmd / gdc |
| Go | The Go Programming Language | go run helloworld.go or go build → ./helloworld | golang |
| Rust | Rust Language | rustc helloworld.rs → ./helloworld | rustc, cargo |
| Java | Java Language (JDK) | javac HelloWorld.java → java HelloWorld | openjdk-17-jdk (sau alt JDK) |
| x86_64 Assembly | x86 Reference | depinde de cod/assembler (TODO) | build-essential, gcc/as/ld |
| ARM64 Assembly | AArch64 ISA | depinde de cod/assembler (TODO) | toolchain AArch64 (gcc-aarch64-linux-gnu) |
| Bash | GNU Bash | bash helloworld.sh | bash |
| Python | Python | python helloworld.py | python (python3) |
| Ruby | Ruby | ruby helloworld.rb | ruby |
| PHP | PHP | php helloworld.php | php |
| Perl | Perl | perl helloworld.pl | perl |
| Lua | Lua | lua helloworld.lua | lua |

---

## Coduri Hello, World!

### C
```c
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}
```
Build with:

```bash
gcc -Wall -o helloworld helloworld.c
```

Run with:

```bash
./helloworld
```