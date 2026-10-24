# Helloworld Programs

![helloworld.png](./helloworld.png)

We list below helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language        | Language (Spec) Site                                                                          | Section             | Build / Run Toolchain | Debian / Ubuntu Packages |
| --------------- | --------------------------------------------------------------------------------------------- | ------------------- | --------------------- | ------------------------ |
| C               | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard)                               | [C++]()             | GCC                   | build-essential          |
| C++             | [The Standard - C++](https://isocpp.org/std/the-standard)                                     | [C++]()             | GCC / G++             | build-essential, g++     |
| Dlang           | [D Programming Language: Home](https://dlang.org/)                                            | [Dlang]()           | GCC / GDC             | build-essential, gdc     |
| Go              | [The Go Programming Language](https://go.dev/)                                                | [Go]()              | Go                    | golang                   |
| Rust            | [Rust Programming Language](https://rust-lang.org/)                                           | [Rust]()            | Rust (Crate)          | rustlang                 |
| x86_64 assembly | [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/)                     | [x86_64 Assembly]() | GCC / GAS             | build-essential          |
| arm64 assembly  | [Arm A64 Instruction Set Architecture](https://support.arm.com/documentation/ddi0596/latest/) | [ARM64 Assembly]()  | GCC / GAS (AArch64)   | build-essential          |
| Bash            | [Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)                   | [Bash]()            | Bash                  | bash                     |
| Python          | [Welcome to Python.org](https://www.python.org/)                                              | [Python]()          | Python                | python                   |
| Ruby            | [Ruby Programming Language](https://www.ruby-lang.org/en/)                                    | [Ruby]()            | Ruby                  | ruby                     |
| PHP             | [PHP: Hypertext Preprocessor](https://www.php.net/)                                           | [PHP]()             | PHP                   | php                      |
| Perl            | [The Perl Programming Language](https://www.perl.org/)                                        | [Perl]()            | Perl                  | perl                     |
| Lua             | [The Programming Language Lua](https://www.php.net/)                                          | [Lua]()             | Lua                   | lua                      |

## C

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
gdc -Wall -o helloworld helloworld.d
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
    println!("Hello, World");
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

```

Build with:

```bash
TODO
```

Run with:

```bash
TODO
```

## ARM64 Assembly

```asm

```

Build with:

```bash
TODO
```

Run with:

```bash
TODO
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

```py
print("Hello, World!")
```

Run with:

```bash
python helloworld.py
```

## Ruby

```rb
puts "Hello, World!"
```

Run with:

```bash
ruby helloworld.rb
```

## PHP

```php
<?php
echo "Hello, World!"
?>
```

Run with:

```bash
php helloworld.php
```

## Perl

```pl
print("Hello, World!\n")
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
