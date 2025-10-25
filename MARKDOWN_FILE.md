# Helloworld Programs

## Hello, World!

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages. The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| :--- | :--- | :--- | :--- | :--- |
| C | The Standard - C | C | GCC | build-essential |
| C++ | The Standard - C++ | C++ | GCC/G++ | build-essential, g++ |
| Dlang | D Programming Language: Home | Dlang | GCC/GDC | build-essential, gdc |
| Go | The Go Programming Language | Go | Go | golang |
| Rust | Rust Programming Language | Rust | Rust (Crate) | rustlang |
| Java | Java Programming Language | Java | JDK | openjdk-17-jdk |
| x86_64 assembly | x86 and amd64 instruction reference | x86_64 Assembly | GCC/GAS | build-essential |
| ARM64 assembly | Arm A64 Instruction Set Architecture | ARM64 Assembly | GCC/GAS (AArch64) | build-essential |
| Bash | Bash Reference Manual | Bash | Bash | bash |
| Python | Welcome to Python.org | Python | Python | python |
| Ruby | Ruby Programming Language | Ruby | Ruby | ruby |
| PHP | PHP: Hypertext Preprocessor | PHP | PHP | php |
| Perl | The Perl Programming Language | Perl | Perl | perl |
| Lua | The Programming Language Lua | Lua | Lua | lua |

---

## C

```c
#include <stdio.h>
int main(void)
{
    puts("Hello, World!");
    return 0;
}
