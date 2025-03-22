# Helloworld Programs

![Hello, World!](./helloworld.png)

We list below Helloworld programs for diff erent programming languages, i.e. programs that print "Hello, World!". Thespecifi ed compiler or interpreter is required for each programming languages.
The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / RunToolchain | Debian / UbuntuPackages | 
| --- | --- | --- | --- | --- |
| C | [The Standard - C]() | [C]() | GCC | build-essential |
| C++ | [The Standard - C++]() | [C++]() | GCC/G++ | build-essential, g++ |
| Dlang | [D Programming Language:Home]() | [Dlang]() | GCC / GDC | build-essential, gdc |
| Go | [The Go Programming Language]() | [Go]() | Go | golang |
| Rust | [Rust Programming Language]() | [Rust]() | Rust (Crate) | rustlang |
| Java | [Java Programming Language]() | [Java]() | JDK | openjdk-17-jdk |
| x86_64assembly | [x86 and amd64 instructionreference]() | [x86_64Assembly]() | GCC / GAS | build-essential |
| ARM64assembly | [Arm A64 Instruction SetArchitecture]() | [ARM64Assembly]() | GCC / GAS(AArch64) | build-essential |
| Bash | [Bash Reference Manual]() | [Bash]() | Bash | bash |
| Python | [Welcome to Python.org]() | [Python]() | Python | python |
| Ruby | [Ruby Programming Language]() | [Ruby]() | Ruby | ruby |
| PHP | [PHP: Hypertext Preprocessor]() | [PHP]() | PHP | php |
| Perl | [The Perl ProgrammingLanguage]() | [Perl]() | Perl | perl |
| Lua | [The Programming LanguageLua]() | [Lua]() | Lua | lua |

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
gdc -Wall -o helloworld helloworld.cpp
```

Run with:
```bash
./helloworld
```

## Go
```d
package main

import "fmt"

func main() {
    fmt.Println("Hello, World!")
}

void main()
{
    writeln("Hello, World!");
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
    public static void main(void[] args) {
        System.out.println("Hello Worlds");
    }
}
```

Build with:

```bash
javac HelloWorld.java
```

Run with:

```bash
java HelloWorld.java
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
./helloworld
```

TODO

## ARM64 Assembly
```asm
```

Build with:
```bash
TODO
```

Run with:
```bash
./helloworld
```

## Bash

```bash
echo "Hello World"
```

Run with:

```bash
bash Helloworld.sh
```

## Python
```python
print("Hello World!")
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
echo "Hello, World!"
?>
```

Run with:
```bash
./helloworld
```

## Pearl
```pearl
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