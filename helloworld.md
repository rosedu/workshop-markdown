### Helloworld Programs

---

![HelloWorldPhoto](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.
The table below summarizes the programs:

| Language| Language (Spec) Site | Section | Build / Run Toolchain | Debian/Ubuntu Packages |
|---------|----------------------|---------|-----------------------|------------------------|
|     C   |                   [The Standard - C](https://www.iso-9899.info/wiki/The_Standard)   |     [C]()    |   GCC                    |          build-essential              |
|    C++     |                [The Standard - C++](https://isocpp.org/std/the-standard)      |   [C++]()      |      GCC / G++                 |         build-essential , g++               |
|    Dlang     |              [D Programming Language: Home](https://dlang.org/)        |  [Dlang]()       |    GCC / GDC                   |        build-essential , gdc                |
|    Go     |                 [The Go Programming Language](https://go.dev/)     |  [Go]()       |      Go                 |         golang               |
|   Rust      |               [Rust Programming Language](https://www.rust-lang.org/)       | [Rust]()        | Rust(Crate)                      |              rustlang          |
|   Java      |               [Java Programming Language](https://docs.oracle.com/javase/8/docs/technotes/guides/language/)       |  [Java]()       |         JDK              |     openjdk-17-jdk                   |
|    x86_64 assembly     |    [x86 and amd64 instruction reference](instruction)                  | [x86_x64 Assembly]()        |       GCC / GAS                |           build-essential             |
|     ARM64 assembly    |     [Arm A64 Instruction Set Architecture](https://developer.arm.com/documentation/ddi0596/latest/)                 |    [ARM64 Assembly]()     |       GCC / GAS(Aarch64)                |            build-essential           |
|    Bash     |               [Bash Reference Manual](Reference)       |     [Bash]()    |         Bash              |                 Bash       |
|       Python  |             [Welcome to Python.org](https://www.python.org/)         |   [Python]()      |      Python                 |                  Python      |
|    Ruby     |               [Ruby Programing Language](https://www.ruby-lang.org/en/)       | [Ruby]()        |       Ruby                |         Ruby               |
|     PHP    |                [PHP: Hypertext Preprocessor](https://www.php.net/)      |  [PHP]()       |          PHP             |            PHP            |
|     Perl    |               [The Perl Programming Language](https://www.perl.org/)       |  [Perl]()       |        Perl               |      Perl                  |
|    Lua     |                [The Programming Language Lua](https://www.lua.org/)      |   [Lua]()      |               Lua        |              Lua          |

# C
```C
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

# C++

```c++
#include <iostream>
int main()
{
std::cout << "Hello, World!" << std::endl;
return 0;
}
```

Build with:
```bash
g++ -Wall -o helloworld helloworld.cpp
```

Run with:
```bash
./helloworld
```

# Rust
```Rust
fn main() {
    println!("Hello, World!");
}
```

Build with:
```bash
rustc hello.rs
```

Run with:
```bash
./helloworld
```