# Helloworld Programs

![](./helloworld.png)

We list below Helloworld programs for diﬀerent programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:



| Language | Lnaguage (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| -------- | -------------------- | ------- | --------------------- | ------------------------ |
| C        | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard)| [C](#c) | GCC | build-essetial |
| C++ | [The Standard - C++](https://isocpp.org/std/the-standard) | [C++](#c++) | GCC / G++ | build-essential, g++ |
| Dlang | [D Programming Language: Home](https://dlang.org/) | [Dlang](#dlang) | GCC / GDC | build-essential, gdc |
| Go | [The Go Programming Language](https://go.dev/) | [Go](#go) | Go | golang |
| Rust | [Rust Programming Language](https://www.rust-lang.org/) | [Rust](#rust) | Rust(Crate) | rustlang |
| Java | [Java Programming Language](https://docs.oracle.com/javase/8/docs/technotes/guides/language/#:~:text=The%20Java%E2%84%A2%20Programming%20Language,the%20Java%20Virtual%20Machine%20Specification.) | [Java](#java) | JDK | openjdk-17-jdk |
| x86_64 assembly | [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/) | [x86_64 Assembly](#x86_64-assembly) | GCC / GAS | build-essential |
| ARM64 Assembly | [Arm A64 Instruction Set Architecture](https://developer.arm.com/documentation/ddi0596/latest/) | [ARM64<br> Assembly](#arm64-assembly) | GCC / GAS (AArch) | build-essential |
| Bash | [Bash Reference Manual](https://www.gnu.org/software/bash/) | [Bash](#bash) | Bash | bash |
| Python | [Welcome to Python.org](https://www.python.org/) | [Python](#python) | Python | python |
| Ruby | [Ruby Programming Language](https://www.ruby-lang.org/en/) | [Ruby](#ruby) | Ruby | ruby |
| PHP | [PHP: Hypertext Preprocessor](https://www.php.net/) | [PHP](#php) | PHP | php |
| Perl | [The Perl Programming Language](https://www.perl.org/) | [Perl](#perl) | Perl | perl |
| Lua | [The Programming Language Lua](https://www.lua.org/) | [Lua](#lua) | Lua | lua |


# C
```console

#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}
```
Build with:

```console
gcc -Wall -o helloworld helloworld.c
```

Run with:

```console
./helloworld
```

# C++
```console

#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
Build with:

```console
g++ -Wall -o helloworld helloworld.cpp
```

Run with:

```console
./helloworld
```

# Dlang












# Go














# Rust













# Java












# x86_64 assembly














# ARM64 assembly















# Bash















# Python















# Ruby

















# PHP














# Perl
















# Lua
















