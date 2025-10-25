## Helloworld Programs

---

![Hello World](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec / Home) | Site Section | Build / Run Toolchain | Debian / Ubuntu Packages |
|-----------|------------------------|---------------|----------------------|---------------------------|
| C | [The Standard - C](https://www.open-std.org/jtc1/sc22/wg14/) | C | GCC | build-essential |
| C++ | [The Standard - C++](https://isocpp.org/) | C++ | GCC / G++ | build-essential, g++ |
| Dlang | [D Programming Language: Home](https://dlang.org/) | Dlang | GCC / GDC | build-essential, gdc |
| Go | [The Go Programming Language](https://golang.org/) | Go | Go | golang |
| Rust | [Rust Programming Language](https://www.rust-lang.org/) | Rust | Rust (Crate) | rustlang |
| Java | [Java Programming Language](https://www.java.com/) | Java | JDK | openjdk-17-jdk |
| x86_64 Assembly | [x86 and amd64 Instruction Set Reference](https://www.felixcloutier.com/x86/) | Assembly | GCC / GAS | build-essential |
| ARM64 Assembly | [Arm A64 Instruction Set (AArch64)](https://developer.arm.com/documentation/ddi0602/2024-03/Base-Instructions?lang=en) | Assembly | GCC / GAS | build-essential |
| Bash | [Bash Reference Manual](https://www.gnu.org/software/bash/manual/) | Bash | Bash | bash |
| Python | [Welcome to Python.org](https://www.python.org/) | Python | Python | python |
| Ruby | [Ruby Programming Language](https://www.ruby-lang.org/) | Ruby | Ruby | ruby |
| PHP | [PHP: Hypertext Preprocessor](https://www.php.net/) | PHP | PHP | php |
| Perl | [The Perl Programming Language](https://www.perl.org/) | Perl | Perl | perl |
| Lua | [The Programming Language Lua](https://www.lua.org/) | Lua | Lua | lua |

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
```C
gcc -Wall -o helloworld helloworld.c
```
Run with:
```C
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

```cpp
g++ -Wall -o helloworld helloworld.cpp
```
Run with:

```cpp
./helloworld
```

## Dlang

```D
import std.stdio;
void main()
{
    writeln("Hello, World!");
}
```

Build with:
```D
gdc -Wall -o helloworld helloworld.cpp
```

Run with:
```D
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

```go
go run helloworld.go
```

# Rust

```Rust
fn main() {
    println!("Hello, World");
}
```

Build with:

```Rust
rustc hello.rs
```
Run with:

```Rust
./helloworld
```

# Java

```Java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

Build with:

```Java
javac HelloWorld.java
```

Run with:

```Java
java HelloWorld
```

## x86_64 Assembly

Build with:

```assembly
TODO
```

Run with:

```assembly
./helloworld
```

## ARM64 Assembly

Build with:

```assembly
TODO
```

Run with:

```assembly
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

```python
python helloworld.py
```
## Ruby

```ruby
puts "Hello, World!"
```

Run with:

```ruby
ruby helloworld.rb
```

## PHP

```php
<?php
echo "Hello, World!"
?>
```

Run with:

```php
./helloworld
```

## Perl

```perl
print("Hello, World!\n")
```

Run with:

```perl
perl helloworld.pl
```

## Lua

```lua
print("Hello, World!")
```

Run with:

```lua
lua helloworld.lua
```
