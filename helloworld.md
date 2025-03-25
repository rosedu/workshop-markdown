# Helloworld Programs

![helloworld](helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Languages         | Language(Spec) Site                          | Section          | Build/Run Toolchain | Debian/Ubuntu Packages |
|-------------------|----------------------------------------------|------------------|---------------------|------------------------|
| C                 | [The Standard - C](https://en.cppreference.com/w/c) | C                | GCC                 | build-essential        |
| C++               | [The Standard - C++](https://en.cppreference.com/w/cpp) | C++              | GCC / G++           | build-essential, g++   |
| Dlang             | [D Programming Language: Home](https://dlang.org/) | Dlang            | GCC / GDC           | build-essential, gdc   |
| Go                | [The Go Programming Language](https://go.dev/) | Go               | Go                  | golang                 |
| Rust              | [Rust Programming Language](https://www.rust-lang.org/) | Rust             | Rust (Crate)        | rustlang               |
| Java              | [Java Programming Language](https://www.oracle.com/java/) | Java             | JDK                 | openjdk-17-jdk         |
| x86_64 assembly   | [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/) | x86_64 Assembly  | GCC / GAS            | build-essential        |
| ARM64 assembly    | [Arm A64 Instruction Set Architecture](https://developer.arm.com/documentation/ddi0596/latest/) | ARM64 Assembly   | GCC / GAS (AArch64)  | build-essential        |
| Bash              | [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html) | Bash             | Bash                | bash                   |
| Python            | [Welcome to Python.org](https://www.python.org/) | Python           | Python              | python                 |
| Ruby              | [Ruby Programming Language](https://www.ruby-lang.org/en/) | Ruby             | Ruby                | ruby                   |
| PHP               | [PHP: Hypertext Preprocessor](https://www.php.net/) | PHP              | PHP                 | php                    |
| Perl              | [The Perl Programming Language](https://www.perl.org/) | Perl             | Perl                | perl                   |
| Lua               | [The Programming Language Lua](https://www.lua.org/) | Lua              | Lua                 | lua                    |

## C

```c
#include <stdio.h>

int main (void)
{
    puts ("Hello, World!");
    return 0;
}
```

Build with:

```bash
gcc -wall -o helloworld hellowrold.c
```

Run with :

```bash
./helloworld
```

## C++

```cpp
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

## Dlang

```d
import std.stdio;

void main()
{
    writeln("Hello, World!");
}
```

Build with:

```bash
gdc -Wall -o helloworld helloworld.cpp
```

Run with:

```bash
./helloworld
```

## Go

```go
package main

import "fmt"

func main() {
    fmt.Println("Hello, World!")
}
```

Build and run with:

```bash
go run helloworld.go
```

## Rust

```rust
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

## Java

```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

Build with:

```bash
javac HelloWorld.java
```

Run with:

```bash
java HelloWorld
```

## x86_64 Assembly

```asm
section .data
    msg db "Hello, World!", 0

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
```

Build with:

```bash
nasm -f elf64 -o helloworld.o helloworld.asm
ld -o helloworld helloworld.o
```

Run with:

```bash
./helloworld
```

## ARM64 Assembly

```asm
.section .data
    msg: .asciz "Hello, World!"

.section .text
    .global _start

_start:
    ldr x0, =1          // File descriptor (stdout)
    ldr x1, =msg        // Message address
    ldr x2, =13         // Message length
    mov x8, 64          // syscall: write
    svc 0

    mov x8, 93          // syscall: exit
    mov x0, 0           // Exit code
    svc 0
```

Build with:

```bash
aarch64-linux-gnu-as -o helloworld.o helloworld.s
aarch64-linux-gnu-ld -o helloworld helloworld.o
```

Run with:

```bash
./helloworld
```

## Bash

```bash
echo "Hello, World!"
```

Run with:

```bash
bash helloworld.sh
```

## Python

```python
print("Hello, World!")
```

Run with:

```bash
python helloworld.py
```

## Ruby

```ruby
puts "Hello, World!"
```

Run with:

```bash
ruby helloworld.rb
```

## PHP

```php
<?php
echo "Hello, World!";
?>
```

Run with:

```bash
./helloworld
```

## Perl

```perl
print("Hello, World!\n");
```

Run with:

```bash
perl helloworld.pl
```

## Lua

```lua
print("Hello, World!")
```

Run with:

```bash
lua helloworld.lua
```
