# Hello, World!

<div style="text-align: center;">
  <img src="helloworld.png" alt="HelloWorld" width="1024">
</div>

> [!Note]
> This document contains "Hello, World!" examples across multiple programming languages.
> Each example prints the phrase **Hello, World!** to the standard output.

---

## *Examples Hello, World Programs!*

We list below Helloworld programs for didifferent programming languages, i.e. programs that print "Hello, World!". Thespecified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language           | Language (Spec) Site                                                                             | Section                                   | Build / Run Toolchain    | Debian / Ubuntu Packages   |
|--------------------|--------------------------------------------------------------------------------------------------|-------------------------------------------|--------------------------|----------------------------|
| C                  | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard)                                  | [C](#c)                                   | GCC                      | build-essential            |
| C++                | [The Standard - C++](https://isocpp.org/std/the-standard)                                        | [C++](#c++)                               | GCC / G++                | build-essential, g++       |
| Dlang              | [D Programming Language: Home](https://dlang.org/)                                               | [Dlang](#d-language)                      | GCC / GDC                | build-essential, gdc       |
| Go                 | [The Go Programming Language](https://go.dev/)                                                   | [Go](#go)                                 | Go                       | golang                     |
| Rust               | [Rust Programming Language](https://www.rust-lang.org/)                                          | [Rust](#rust)                             | Rust (Crate)             | rustlang                   |
| Java               | [Java Programming Language](https://docs.oracle.com/javase/8/docs/technotes/guides/language/)    | [Java](#java)                             | JDK                      | openjdk-17-jdk             |                   
| x86_64 assembly    | [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/)                        | [x86_64 Assembly](#assembly-x86_64-arm64) | GCC / GAS                | build-essential            |
| ARM64 assembly     | [Arm A64 ISA](https://developer.arm.com/documentation/ddi0596/latest/)                           | [ARM64 Assembly](#assembly-x86_64-arm64)  | GCC / GAS (AArch64)      | build-essential            |
| Bash               | [Bash Reference Manual](https://www.gnu.org/s/bash/manual/bash.html)                             | [Bash](#bash)                             | Bash                     | bash                       |
| Python             | [Welcome to Python.org](https://www.python.org/)                                                 | [Python](#python)                         | Python                   | python                     |
| Ruby               | [Ruby Programming Language](https://www.ruby-lang.org/en/)                                       | [Ruby](#ruby)                             | Ruby                     | ruby                       |
| PHP                | [PHP: Hypertext Preprocessor](https://www.php.net/)                                              | [PHP](#php)                               | PHP                      | php                        |
| Perl               | [The Perl Programming Language](https://www.perl.org/)                                           | [Perl](#perl)                             | Perl                     | perl                       |
| Lua                | [The Programming Language Lua](https://www.lua.org/)                                             | [Lua](#lua)                               | Lua                      | lua                        |


---

### 🌐 C

```c
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}
```

```sh
Build: gcc -Wall -o helloworld helloworld.c
Run: ./helloworld
```

---

### ➕ C++

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

```sh
Build: g++ -Wall -o helloworld helloworld.cpp
Run: ./helloworld
```

---

### 🧪 D Language

```d
import std.stdio;

void main()
{
    writeln("Hello, World!");
}
```

```sh
Build: gdc -Wall -o helloworld helloworld.d
Run: ./helloworld
```

---

### 🐹 Go

```go
package main

import "fmt"

func main() {
    fmt.Println("Hello, World!")
}
```

```sh
Run directly: go run helloworld.go
```

---

### 🦀 Rust

```rust
fn main() {
    println!("Hello, World!");
}
```

```sh
Build: rustc hello.rs
Run: ./helloworld
```

---

### ☕ Java

```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

```sh
Build: javac HelloWorld.java
Run: java HelloWorld
```

---

### 🖥️ Assembly (x86_64, ARM64)

```asm
; TODO: Add assembly examples for x86_64 and ARM64
```

---

### 🐚 Bash

```bash
echo "Hello, World!"
```

```sh
Run: bash helloworld.sh or inline in terminal
```

---

### 🐍 Python

```python
print("Hello, World!")
```

```sh
Run: python helloworld.py
```

---

### 💎 Ruby

```ruby
puts "Hello, World!"
Run: ruby helloworld.rb
```

---

### 🐘 PHP

```php
<?php
echo "Hello, World!";
?>
```

```sh
Run: php helloworld.php
```

---

### 🦪 Perl

```perl
print("Hello, World!\n");
```

```sh
Run: perl helloworld.pl
```

---

### 🌙 Lua

```lua
print("Hello, World!")
```

```sh
Run: lua helloworld.lua
```

---
