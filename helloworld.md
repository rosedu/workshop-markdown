# Helloworld Programs

![hello](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| ----- | ----- | ----- | ----- | ----- |
| C | [The Standard C]() | [C]() | GCC | build-essential |
| C++ | [The Standard-C++]() | [C++]() | GCC / G++ | build-essential , g++ |
| Dlang | [D Programming Lanugage: Home]() | [Dlang]() | GCC / GDC | build-essential , gdc |
| Go | [The Go Programming Languages]() | [Go]() | Go | golang |
| Rust | [Rust Programming Language]() | [Rust]() | Rust(Crate) | rust lang |
| java | [java Programming Language]() | [java]() | JDK | openjdk-17-jdk |
| x86_64 | [x86 and amd64 instruction reference]() | [x86_64 Assembly]() | GCC / GAS | build-essential |
| ARM64 | [Arm A64 Instruction Set Architecture]() | [ARM64 Assembly]() | GCC / GAS (AArch64) | build-essential |
| Bash | [Bash Reference Manual]() | [Bash]() | Bash | Bash |
| Python | [Welcome to Python.org]() | [Python]() | Python | python |
| PHP | [PHP:Hypertext Preprocessor]() | [PHP]() | PHP | php |
| Perl | [The Perl Programming Language]() | [Perl]() | Perl | perl
| Lua | [The programming Language Lua]() | [Lua]() | Lua | lua |

# C

```C
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}
```
Build with :
```Bash
gcc -Wall -o helloworld helloworld.c
```

Run with:
```Bash
./helloworld
```

# C++
```C++
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

Build with:

```Bash
g++ -Wall -o helloworld helloworld.cpp
```

Run with:

```Bash
./helloworld
```

# Dlang

```Dlang
import std.stdio;

void main()
{
    writeln("Hello, World!");
}
```

Build with:
```Bash
gdc -Wall -o helloworld helloroworld.cpp
```

Run with:

```Bash
./helloworld
```

# Go 
```go
package main

import "fmt"

func main(){
    fmt.Println("Hello, World!");
}
```

Build and run with:

```Bash
go run helloworld.go
```

# Rust
```Rust
fn main(){
    println!("Hello, World!");
}
```
Build with:
```Bash
rustc hello.rs
```
Run with:
```Bash
./helloworld
```
# Java 
```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```
Build with:

```Bash
javac HelloWorld.java
```
Run with:
```Bash
java HelloWorld
```

# x86_64 Assembly

TODO

Build with:
```NASM
TODO
```
Run with : 
```Bash
./helloworld
```
TODO

# ARM64 Assembly

TODO

Build with:
```Asm
TODO
```
Run with:
```Bash
./helloworld
```
# Bash

```Bash
echo "Hello, World!"
```
Run with:

```Bash
Bash helloworld.sh
```
# Python

```Python
print("Hello, World!")
```

Run with:

```Bash
python helloworld.py
```

# Ruby

```Ruby
puts "Hello, World!"
```

Run with:
```Bash
ruby helloworld.rb
```

# PHP
```php
<?php
echo "Hello, World!" 
?>
```
Run with:
```Bash
./helloworld
```

# Perl

```Perl
print("Hello, World!\n")
```
Run with:

```Bash
perl helloworld.pl
```

# Lua

```Lua
print("Hello, World!")
```

Run with:
```Bash
lua helloworld.lua
```