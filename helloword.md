# Helloworld Programs

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!".
The specified compiler or interpreter is required for each programming language.

## Summary

| Language | Language (Spec) | Site Section | Build / Run Toolchain | Debian / Ubuntu Packages |
|----------|----------------|--------------|----------------------|--------------------------|
| C | The Standard - C | C | GCC | `build-essential` |
| C++ | The Standard - C++ | C++ | GCC / G++ | `build-essential`, `g++` |
| Dlang | D Programming Language: Home | Dlang | GCC / GDC | `build-essential`, `gdc` |
| Go | The Go Programming Language | Go | Go | `golang` |
| Rust | Rust Programming Language | Rust | Rust (Crate) | `rustlang` |
| Java | Java Programming Language | Java | JDK | `openjdk-17-jdk` |
| x86_64 Assembly | x86 and amd64 instruction reference | x86_64 Assembly | GCC / GAS | `build-essential` |
| ARM64 Assembly | Arm A64 Instruction Set Architecture | ARM64 Assembly | GCC / GAS (AArch64) | `build-essential` |
| Bash | Bash Reference Manual | Bash | Bash | `bash` |
| Python | Welcome to Python.org | Python | Python | `python` |
| Ruby | Ruby Programming Language | Ruby | Ruby | `ruby` |
| PHP | PHP: Hypertext Preprocessor | PHP | PHP | `php` |
| Perl | The Perl Programming Language | Perl | Perl | `perl` |
| Lua | The Programming Language Lua | Lua | Lua | `lua` |

---

## C

``````````````c
#include <stdio.h>

int main(void) {
    puts("Hello, World!");
    return 0;
}
` ``

**Build:** `gcc -Wall -o helloworld helloworld.c`  
**Run:** `./helloworld`

---

## C++

`````````````cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
` ``

**Build:** `g++ -Wall -o helloworld helloworld.cpp`  
**Run:** `./helloworld`

---

## Dlang

````````````d
import std.stdio;

void main() {
    writeln("Hello, World!");
}
` ``

**Build:** `gdc -Wall -o helloworld helloworld.d`  
**Run:** `./helloworld`

---

## Go

```````````go
package main

import "fmt"

func main() {
    fmt.Println("Hello, World!")
}
` ``

**Build and run:** `go run helloworld.go`

---

## Rust

``````````rust
fn main() {
    println!("Hello, World!");
}
` ``

**Build:** `rustc hello.rs`  
**Run:** `./helloworld`

---

## Java

`````````java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
` ``

**Build:** `javac HelloWorld.java`  
**Run:** `java HelloWorld`

---

## x86_64 Assembly

> TODO

**Run:** `./helloworld`

---

## ARM64 Assembly

> TODO

**Run:** `./helloworld`

---

## Bash

````````bash
echo "Hello, World!"
` ``

**Run:** `bash helloworld.sh`

---

## Python

```````python
print("Hello, World!")
` ``

**Run:** `python helloworld.py`

---

## Ruby

``````ruby
puts "Hello, World!"
` ``

**Run:** `ruby helloworld.rb`

---

## PHP

`````php
<?php
echo "Hello, World!";
` ``

**Run:** `php helloworld.php`

---

## Perl

````perl
print("Hello, World!\n")
` ``

**Run:** `perl helloworld.pl`

---

## Lua

```lua
print("Hello, World!")
` ``

**Run:** `lua helloworld.lua`
```
