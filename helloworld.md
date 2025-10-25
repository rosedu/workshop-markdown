# Hello World Programs

We list below "Hello, World!" programs for different programming languages — i.e. programs that print `"Hello, World!"`. Each language requires its corresponding compiler or interpreter.

---

## Summary Table

| Language       | Compiler / Toolchain                   | Package (Debian/Ubuntu)             |
|----------------|----------------------------------------|------------------------------------|
| C              | GCC                                    | `build-essential`                  |
| C++            | G++                                    | `build-essential`, `g++`           |
| D              | GDC                                    | `build-essential`, `gdc`           |
| Go             | Go Compiler                            | `golang`                           |
| Rust           | Rustc                                  | `rustc`                            |
| Java           | Java JDK                               | `openjdk-17-jdk`                   |
| x86_64 ASM     | GCC / GAS                              | `build-essential`                  |
| ARM64 ASM      | GCC / GAS (AArch64)                    | `build-essential`                  |
| Bash           | Bash Interpreter                       | `bash`                             |
| Python         | Python Interpreter                     | `python3`                          |
| Ruby           | Ruby Interpreter                       | `ruby`                             |
| PHP            | PHP Interpreter                        | `php`                              |
| Perl           | Perl Interpreter                       | `perl`                             |
| Lua            | Lua Interpreter                        | `lua`                              |

---

## Source Code Examples

### C
```c
#include <stdio.h>
int main(void) {
    puts("Hello, World!");
    return 0;
}
```
Build: `gcc -Wall -o helloworld helloworld.c`
Run: `./helloworld`

etc.