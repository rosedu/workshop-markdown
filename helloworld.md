## Helloworld Programs

![hello-world](helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!".
The specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
|----------|----------------------|---------|-----------------------|--------------------------|
| C        | [The Standard - C](https://www.google.com/)        | [C](#c) | GCC | `build-essential` |
| C++      | [The Standard - C++](https://www.google.com/)       |[C++](#c++) | GCC / G++ | `build-essential, g++` |
| Dlang    | [D Programming Language: Home](https://www.google.com/)       |[Dlang](#dlang) | GCC / GDC | `build-essential, gdc` |
| Go       | [The Go Programming Language](https://www.google.com/)       |[Go](#go) | Go | `golang` |
| Rust     | [Rust Programming Language](https://www.google.com/)       |[Rust](#rust) | Rust(Crate) | `rustlang` |
| Java     | [Java Programming Language](https://www.google.com/)       |[Java](#java) | JDK | `openjdk-17-jdk` |
| x86_64 assembly | [x86 and amd64 instruction reference](https://www.google.com/)       |[x86_64 assembly](#x86_64-assembly) | GCC / GAS | `build-essential` |
| ARM64 assembly  | [Arm A64 Instruction Set Architecture](https://www.google.com/)       |[ARM64 assembly](#ARM64-assembly) | GCC / GAS (AArch64) | `build-essential` |
| Bash            | [Bash Reference Manual](https://www.google.com/)       |[Bash](#bash) | Bash | `bash` |
| Python          | [Welcome to Python.org](https://www.google.com/)       |[Python](#python) | Python | `python` |
| Ruby            | [Ruby Programming Language](https://www.google.com/)       |[Ruby](#ruby) | Ruby | `ruby` |
| PHP             | [PHP:Hypertext Preprocesor](https://www.google.com/)       |[PHP](#php) | PHP | `php` |
| Perl            | [The Perl Programming Language](https://www.google.com/)       |[Perl](#perl) | Perl | `perl` |
| Lua             | [The Programming Language Lua](https://www.google.com/)       |[Lua](#lua) | Lua | `lua` |

## C
```c
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}
```
#### Build with:

`gcc -Wall -o helloworld helloworld.c`

#### Run with:

`./helloworld`

## C++

```c++
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

#### Build with:

`g++ -Wall -o helloworld helloworld.cpp`

#### Run with:

`./helloworld`

## Dlang

```golang
import std.stdio;
void main()
{
    writeln("Hello, World!");
}
```
#### Build with:

`gdc -Wall -o helloworld helloworld.cpp`

#### Run with:

`./helloworld`

## Go

```go
package main 

import "fmt"

func main() {
    fmt.Println("Hello, World!")
}
```

#### Buld and run with:
`go run helloworld.go`