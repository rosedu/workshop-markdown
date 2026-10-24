# Helloworld Programs

![image](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| --- | --- | --- | --- | --- |
| C | [<u>The Standard - C</u>](https://www.iso-9899.info/wiki/The_Standard) | [<u>C</u>] | GCC | build-essential |
| C++ | [<u>The Standard - C++</u>](https://isocpp.org/std/the-standard) | [<u>C++</u>] | GCC / G++ | build-essential , g++ |
| Dlang | [<u>D Programming Language: Home</u>](https://dlang.org/) | [<u>Dlang</u>] |GCC / GDC | build-essential , gdc |
| Go | [<u>The Go Programming Language</u>](https://go.dev/) | [<u>Go</u>] | Go | golang |
| Rust | [<u>Rust Programming Language</u>](https://www.rust-lang.org/) | [<u>Rust</u>] | Rust(Crate) | rustlang |
| Java | [<u>Java Programming Language</u>](https://docs.oracle.com/javase/8/docs/technotes/guides/language/) | [<u>JavaJDK] | openjdk-17-jdk |
| <p>x86_64<br>assembly</p> | [<u>x86 and amd64 instruction reference</u>](https://docs.oracle.com/javase/8/docs/technotes/guides/language/) | [<u>x86_64 Assembly</u>] | GCC / GAS | build-essential |
| <p>ARM64<br>assembly</p> | [<u>Arm A64 Instruction Set Architecture</u>](https://docs.oracle.com/javase/8/docs/technotes/guides/language/) | [<u>ARM64 Assembly</u>] | <p>GCC / GAS<br>(AArch64)</p> | build-essential
| Bash | [<u>Bash Reference Manual</u>](https://docs.oracle.com/javase/8/docs/technotes/guides/language/) | [<u>Bash</u>] | Bash | bash |
| Python | [<u>Welcome to Python.org</u>](https://docs.oracle.com/javase/8/docs/technotes/guides/language/) | [<u>Python</u>] | Python | python |
| Ruby | [<u>Ruby Programming Language</u>](https://www.ruby-lang.org/en/) | [<u>Ruby</u>] | Ruby | ruby |
| PHP | [<u>PHP: Hypertext Preprocessor</u>](https://www.php.net/) | [<u>PHP</u>] | PHP | php |
| Perl | [<u>The Perl Programming Language</u>](https://www.perl.org/) | [<u>Perl</u>] | Perl | perl |
| Lua | [<u>The Programming Language Lua</u>](https://www.lua.org/) | [<u>Lua</u>] | Lua | lua |

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

```bash
gcc -Wall -o helloworld helloworld.c
```

Run with:

```bash
./helloworld
```

## C++

```C++
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

```Dlang
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

```Go
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

```Rust
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

```Java
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

```x86_64 Assembly

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

## ARM 64 Assembly

```ARM64 Assembly

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

```Bash
echo "Hello, World!"
```

Run with:

```bash
bash helloworld.sh
```

## Python

```Python
print("Hello, World!")
```

Run with:

```bash
python helloworld.py
```

## Ruby

```Ruby
puts "Hello, World!"
```

Run with:

```bash
ruby helloworld.rb
```

## PHP

```PHP
<?php
echo "Hello, World!"
?>
```

Run with:

```bash
./helloworld
```

## Perl

```Perl
print("Hello, World!\n")
```

Run with:

```bash
perl helloworld.pl
```

## Lua

```Lua
print("Hello, World!")
```

Run with:

```bash
lua helloworld.lua
```
