# Helloworld Programs

We list below Helloworld programs for diﬀerent programming languages, i.e. programs that print "Hello, World!" <br>
.The specified compiler or interpreter is required for each programming languages. <br>
The table below summarizes the programs: <br>
| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| :--- | :--- | :--- | :--- | :--- |
| C | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard) | [C](#c) | GCC | `build-essential` |
| C++ | [The Standard - C++](https://isocpp.org/std/the-standard) | [C++](#c-1) | GCC/G++ | `build-essential, g++` |
| Dlang | [D Programming Language: Home](https://dlang.org/) | [Dlang](#dlang) | GCC/GDC | `build-essential, gdc` |
| Go | [The Go Programming Language](https://go.dev/) | [Go](#go) | Go | `golang` |
| Rust | [Rust Programming Language](https://www.rust-lang.org/) | [Rust](#rust) | Rust (Crate) | `rustc, cargo` |
| Java | [Java Programming Language](https://docs.oracle.com/javase/8/docs/technotes/guides/language/) | [Java](#java) | JDK | `openjdk-17-jdk` |
| x86_64 assembly | [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/) | [x86_64 Assembly](#x86_64-assembly) | GCC/GAS | `build-essential` |
| ARM64 assembly | [Arm A64 Instruction Set Architecture](https://developer.arm.com/documentation/ddi0596/latest/) | [ARM64 Assembly](#arm64-assembly) | GCC/GAS (AArch64) | `build-essential` |
| Bash | [Bash Reference Manual](https://www.gnu.org/s/bash/manual/bash.html) | [Bash](#bash) | Bash | `bash` |
| Python | [Welcome to Python.org](https://www.python.org/) | [Python](#python) | Python | `python3` |
| Ruby | [Ruby Programming Language](https://www.ruby-lang.org/en/) | [Ruby](#ruby) | Ruby | `ruby` |
| PHP | [PHP: Hypertext Preprocessor](https://www.php.net/) | [PHP](#php) | PHP | `php` |
| Perl | [The Perl Programming Language](https://www.perl.org/) | [Perl](#perl) | Perl | `perl` |
| Lua | [The Programming Language Lua](https://www.lua.org/) | [Lua](#lua) | Lua | `lua5.3` |

## C
```c
#include <stdio.h>
int main(void) {
	puts("Hello, World!");
	return 0;
}
```

Build with:
gcc -Wall -o helloworld helloworld.c <br>
Run with:
./helloworld

## C++
```cpp
#include <iostream>
int main(){
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
```
Build with:
g++ -Wall -o helloworld helloworld.cpp <br>
Run with:
./helloworld<br>


## Dlang
```d
import std.stdio;
void main() {
	writeln("Hello, World!");
}
```
Build with:
gdc -Wall -o helloworld helloworld.cpp <br>
Run with:
./helloworld <br>


## Go
```go
package main
import "fmt"
func main() {
	fmt.Println("Hello, World!")
}
```
Build and run with:
go run helloworld.go


## Rust
```rust
fn main() {
	println!("Hello, World");
}
```
Build with:
rustc hello.rs <br>
Run with:
./helloworld


## Java
```java
public class HelloWorld {
	public static void main(String[] args) {
		System.out.println("Hello, World!");
	}
}
```
Build with:
javac HelloWorld.java <br>
Run with:
java HelloWorld

## Assembly
Build with:
TODO
Run with:
./helloworld
TODO
ARM64 Assembly
Build with:
TODO
Run with:
./helloworld


## Bash
```bash
echo "Hello, World!"
```
Run with:
bash helloworld.sh


## Python
```python
print("Hello, World!")
```
Run with:
python helloworld.py


## Ruby
```ruby
puts "Hello, World!"
```
Run with:
ruby helloworld.rb


## PHP
```php
<?php
echo "Hello, World!"
?>
```
Run with:
./helloworld

## Perl
```perl
print("Hello, World!\n")
```
Run with:
perl helloworld.pl


## Lua
```lua
print("Hello, World!")
```
Run with:
lua helloworld.lua