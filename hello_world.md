# Helloworld Programs
![hello world](./helloworld.png "Hello world")

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:
| Language   | Language(Spec) Site | Section | Build/Run Toolchain | Debian / Ubuntu Packages |
|:-----------|:--------------------|:--------|:--------------------|:-------------------------|
| C | The Standard - C | C | GCC | build-essential |
| Dlang |The Standard - C++ | C++| GCC / G++ | build-essential, g++ |
| Go | The Go Programming Language | Go | Go | golang |
| Rust | Rust Programming Language | Rust | Rust (Crate) | rustlang |
| Java | Java Programming Language | Java | JDK | openjdk-17-jdk |
| x86_64assembly | x86 and amd64 instructionreference | x86_64Assembly | GCC / GAS | build-essential |
| ARM64assembly | Arm A64 Instruction SetArchitecture | ARM64Assembly | GCC / GAS(AArch64) | build-essential |
| Bash | Bash Reference Manual | Bash | Bash | bash |
|  Python | Welcome to Python.org | Python | Python | python |
| Ruby | Ruby Programming Language | Ruby | Ruby | ruby |
| PHP | PHP: Hypertext Preprocessor | PHP | PHP | php |
| Perl | The Perl ProgrammingLanguage | Perl | Perl | perl |
| Lua | The Programming LanguageLua | Lua | Lua | lua |

# C
```console
#include <stdio.h>
int main (void)
{
puts( "Hello, World!" );
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
# C++
```console
#include <iostream>
int main ()
{
std::cout<<"Hello, World!"<<std::endl;
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
# Dlang
```console
import std.studio
void main ()
{
writeIn("Hello, World!");
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
# Go
```console
package main

import "fmt"

func main(){
fmt.Println("Hello, World!")
}
```
Build and run with:
```console
go run helloworld.go
```
# Rust
```console
fn main(){
    println!(" Hello, World ");
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
# Java
```console
public class HelloWorld {
    public static void main ( String [] args ) {
        System.out.println ( "Hello, World!" );
    }
}
```
Build with:
```console
javac HelloWorld.java
```
Run with:
```console
./helloworld
```
# x86_64 Assembly
Build with:
```console
TODO
```
Run with:
```console
./helloworld
```
