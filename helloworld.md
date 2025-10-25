# Helloworld Programs

We list below Helloworld programs for different programming languages, i.e., programs that print `"Hello, World!"`.  
The specified compiler or interpreter is required for each programming language.  

The table below summarizes the programs:

| Language       | Spec / Site        | Section        | Build / Run Toolchain           | Debian / Ubuntu Packages |
|----------------|------------------|----------------|-------------------------------|-------------------------|
| C              | The Standard - C  | C              | GCC                           | build-essential         |
| C++            | The Standard - C++| C++            | GCC / G++                     | build-essential, g++    |
| D              | D Programming Lang| Dlang          | GCC / GDC                     | build-essential, gdc    |
| Go             | Go Programming    | Go             | Go                            | golang                  |
| Rust           | Rust Lang         | Rust           | Rust (Crate)                  | rustlang                |
| Java           | Java Lang         | Java           | JDK                           | openjdk-17-jdk          |
| x86_64 Assembly| x86_64 ISA        | Assembly       | GCC / GAS                     | build-essential         |
| ARM64 Assembly | ARM64 ISA         | Assembly       | GCC / GAS (AArch64)           | build-essential         |
| Bash           | Bash Reference    | Bash           | Bash                          | bash                    |
| Python         | Python.org        | Python         | Python                        | python                  |
| Ruby           | Ruby Lang         | Ruby           | Ruby                          | ruby                    |
| PHP            | PHP               | PHP            | PHP                           | php                     |
| Perl           | Perl Lang         | Perl           | Perl                          | perl                    |
| Lua            | Lua Lang          | Lua            | Lua                           | lua                     |

---

## Programs

### C
```c
#include <stdio.h>
int main(void)
{
    puts("Hello, World!");
    return 0;
}
