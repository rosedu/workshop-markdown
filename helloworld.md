
![hello](https://github.com/rosedu/workshop-markdown/blob/solution/helloworld.png)

# Helloworld Programs

We list below Helloworld programs for different programming languages, i.e. programs that print `"Hello, World!"`.  
The specified compiler or interpreter is required for each programming language.

| Language | Language (Spec) | Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
|-----------|----------------|------|----------|------------------------|---------------------------|
| C | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard) | C | GCC | build-essential |
| C++ | [The Standard - C++](https://isocpp.org/std/the-standard) | C++ | GCC / G++ | build-essential, g++ |
| Dlang | [D Programming Language: Home](https://dlang.org/) | Dlang | GCC / GDC | build-essential, gdc |
| Go | [The Go Programming Language](https://go.dev/) | Go | golang |  |
| Rust | [Rust Programming Language](https://www.rust-lang.org/) | Rust (Crate) | rustlang |  |
| Java | [Java Programming Language](https://docs.oracle.com/javase/8/docs/technotes/guides/language/) | Java | JDK | openjdk-17-jdk |
| x86_64 assembly | [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/) | x86_64 Assembly | GCC / GAS | build-essential |
| ARM64 assembly | [Arm A64 Instruction Set Architecture](https://developer.arm.com/documentation/ddi0596/latest/) | ARM64 Assembly | GCC / GAS (AArch64) | build-essential |
| Bash | [Bash Reference Manual](https://www.gnu.org/s/bash/manual/bash.html) | Bash | bash |  |
| Python | [Welcome to Python.org](https://www.python.org/) | Python | python |  |
| Ruby | [Ruby Programming Language](https://www.ruby-lang.org/en/) | Ruby | ruby |  |
| PHP | [PHP: Hypertext Preprocessor](https://www.php.net/) | PHP | php |  |
| Perl | [The Perl Programming Language](https://www.perl.org/) | Perl | perl |  |
| Lua | [The Programming Language Lua](https://www.lua.org/) | Lua | lua |  |

---

## C

```c
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}

