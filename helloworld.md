Helloworld Programs   Hello, World! ![Hello World](helloworld.png)
We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages.
The table below summarizes the programs:
Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages 
C | The Standard - C | C | GCC | build-essential 
C++ | The Standard - C++ | C++ | GCC/G++ | build-essential, g++ 
Dlang | D Programming Language: Home | Dlang | GCC/GDC | build-essential, gdc 
Go | The Go Programming Language | Go | Go | golang 
Rust | Rust Programming Language | Rust | Rust (Crate) | rust lang 
Java | Java Programming Language | Java | JDK | openjdk-17-jdk 
x86_64 assembly | x86 and amd64 instruction reference | x86_64 Assembly | GCC/GAS | build-essential 
ARM64 assembly | Arm A64 Instruction Set Architecture | ARM64 Assembly | GCC/GAS (AArch64) | build-essential 
Bash | Bash Reference Manual | Bash | Bash | bash 
Python | Welcome to Python.org | Python | Python | python 
Ruby | Ruby Programming Language | Ruby | Ruby | ruby 
PHP | PHP: Hypertext Preprocessor | PHP | PHP | php 
Perl | The Perl Programming Language | Perl | Perl | perl 
Lua | The Programming Language Lua | Lua | Lua | lua   C #include <stdio.h> int main(void) { puts("Hello, World!"); return 0; } Build with: gcc -Wall -o helloworld helloworld.c Run with: ./helloworld   C++ #include  int main() { 
std::cout << "Hello, World!" << std::endl; return 0; } Build with: g++ -Wall -o helloworld helloworld.cpp Run with: ./helloworld   Dlang import std.stdio; void main() { writeln("Hello, World!"); } Build with: gdc -Wall -o helloworld helloworld.cpp Run with: ./helloworld   Go package main import "fmt" func main() { fmt.Println("Hello, World!") } Build and run with: go run helloworld.go   Rust fn main() { 
println! ("Hello, World"); } Build with: rustc hello.rs Run with: ./helloworld   Java public class Helloworld { public static void main(String[] args) { System.out.println("Hello, World!"); } } Build with: javac Helloworld.java Run with: java Helloworld   x86_64 Assembly TODO Build with: TODO Run with: ./helloworld   ARM64 Assembly TODO Build with: TODO Run with: ./helloworld   Bash echo "Hello, World!" Run with: bash helloworld.sh   Python print("Hello, World!") Run with: python helloworld.py   Ruby puts "Hello, World!" Run with: ruby helloworld.rb   PHP Run with: ./helloworld   Perl print("Hello, World!\n") Run with: perl helloworld.pl   Lua print("Hello, World!") Run with: lua helloworld.lua
# Helloworld Programs

![Hello, World!](helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| -------- | -------------------- | ------- | --------------------- | ------------------------ |
| C | The Standard - C | [C](#c) | GCC | `build-essential` |
| C++ | The Standard - C++ | [C++](#c-1) | GCC/G++ | `build-essential`, `g++` |
| Dlang | D Programming Language: Home | [Dlang](#dlang) | GCC/GDC | `build-essential`, `gdc` |
| Go | The Go Programming Language | [Go](#go) | Go | `golang` |
| Rust | Rust Programming Language | [Rust](#rust) | Rust (Crate) | `rust lang` |
| Java | Java Programming Language | [Java](#java) | JDK | `openjdk-17-jdk` |
| x86_64 assembly | x86 and amd64 instruction reference | [x86_64 Assembly](#x86_64-assembly) | GCC/GAS | `build-essential` |
| ARM64 assembly | Arm A64 Instruction Set Architecture | [ARM64 Assembly](#arm64-assembly) | GCC/GAS (AArch64) | `build-essential` |
| Bash | Bash Reference Manual | [Bash](#bash) | Bash | `bash` |
| Python | Welcome to Python.org | [Python](#python) | Python | `python` |
| Ruby | Ruby Programming Language | [Ruby](#ruby) | Ruby | `ruby` |
| PHP | PHP: Hypertext Preprocessor | [PHP](#php) | PHP | `php` |
| Perl | The Perl Programming Language | [Perl](#perl) | Perl | `perl` |
| Lua | The Programming Language Lua | [Lua](#lua) | Lua | `lua` |

## C

```c
#include <stdio.h>
int main(void) {
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
    println! ("Hello, World");
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
public class Helloworld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```
Build with:
```bash
javac Helloworld.java
```
Run with:
```bash
java Helloworld
```

## x86_64 Assembly

```assembly
TODO
```
Build with:
```bash
TODO
```
Run with:
```bash
./helloworld
```

## ARM64 Assembly

```assembly
TODO
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
echo "Hello, World!"
?>
```
Run with:
```bash
./helloworld
```

## Perl

```perl
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
