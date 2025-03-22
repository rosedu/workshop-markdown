## Helloworld Programs

![helloworld](helloworld.png)

We list below Helloworld programs for diﬀerent programming languages, i.e. programs that print "Hello, World!".
The specified compiler or interpreter is requried for each programming languages.

The table below smmarizes the programs:

| Language        | Language (Spec) Site                                                                            | Section                             | Build / Run Toolchain | Debian / Ubuntu Packages |
| --------------- | ----------------------------------------------------------------------------------------------- | ----------------------------------- | --------------------- | ------------------------ |
| C               | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard)                                 | [C](#c)                             | GCC                   | `build-essential`        |
| C++             | [The Standard - C++](https://isocpp.org/std/the-standard)                                       | [C++](#c++)                         | GCC / G++             | `build-essential`, `g++` |
| Dlang           | [D Programming Language: Home](https://dlang.org/)                                              | [Dlang](#dlang)                     | GCC / GDC             | `build-essential`, `gdc` |
| Go              | [The Go Programming Language](https://go.dev/)                                                  | [Go](#go)                           | Go                    | `golang`                 |
| Rust            | [Rust Programming Language](https://www.rust-lang.org/)                                         | [Rust](#rust)                       | Rust (Crate)          | `rustlang`               |
| Java            | [Java Programming Language](https://docs.oracle.com/javase/8/docs/technotes/guides/language/)   | [Java](#java)                       | JDK                   | `openjdk-17-jdk`         |
| x86_64 assembly | [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/)                       | [x86_64 Assembly](#x86_64-assembly) | GCC / GAS             | `build-essential`        |
| ARM64 assembly  | [Arm A64 Instruction Set Architecture](https://developer.arm.com/documentation/ddi0596/latest/) | [ARM64 Assembly](#arm64-assembly)   | GCC / GAS (AArch64)   | `build-essential`        |
| Bash            | [Bash Reference Manual](https://www.gnu.org/s/bash/manual/bash.html)                            | [Bash](#bash)                       | Bash                  | `bash`                   |
| Python          | [Welcome to Python.org](https://www.python.org/)                                                | [Python](#python)                   | Python                | `python`                 |
| Ruby            | [Ruby Programming Language](https://www.ruby-lang.org/en/)                                      | [Ruby](#ruby)                       | Ruby                  | `ruby`                   |
| PHP             | [PHP: Hypertext Preprocessor](https://www.php.net/)                                             | [PHP](#php)                         | PHP                   | `php`                    |
| Perl            | [The Perl Programming Language](https://www.perl.org/)                                          | [Perl](#perl)                       | Perl                  | `perl`                   |
| Lua             | [The Programming Language Lua](https://www.lua.org/)                                            | [Lua](#lua)                         | Lua                   | `lua`                    |

## C

```C
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

## C++

```c++
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

## Dlang

```dlang
import std.stdio;

void main()
{
    writeln("Hello, World!");
}
```

Build with:

```console
gdc -Wall -o helloworld helloworld.cpp
```

Run with:

```console
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

```console
go run helloworld.go
```

## Rust

```rs
fn main() {
    println!("Hello, World");
}
```

Build with:

```console
rustc hello.rs
```

Run with:

```console
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

```console
javac HelloWorld.java
```

Run with:

```console
java HelloWorld
```

## x86_64 Assembly

```as

```

Build with:

```console
TODO
```

Run with:

```console
./helloworld
```

TODO

## ARM64 Assembly

```as

```

Build with:

```console
TODO
```

Run with:

```console
./helloworld
```

## Bash

```bash
echo "Hello, World!"
```

Run with:

```console
bash helloworld.sh
```

## Python

```py
print("Hello, World!")
```

Run with:

```console
python helloworld.py
```

## Ruby

```rb
puts "Hello, World!"
```

Run with:

```console
ruby helloworld.rb
```

## PHP

```php
<?php
echo "Hello, World!"
?>
```

Run with:

```console
./helloworld
```

## Perl

```pl
print("Hello, World!\n")
```

Run with:

```console
perl helloworld.pl
```

## Lua

```lua
print("Hello, World!")
```

Run with:

```console
lua helloworld.lua
```
