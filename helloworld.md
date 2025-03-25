# Helloworld programs
---

![Hello World PNG](helloworld.png)

We list below Helloworld programs for diff erent programming languages, i.e. programs that print "Hello, World!". Thespecifi ed compiler or interpreter is required for each programming languages.
The table below summarizes the programs:


| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
|----------|----------------------|---------|-----------------------|--------------------------|
|C         |[The Standard - C](https://www.iso-9899.info/wiki/The_Standard)       |[C](#)       | GCC         | build-essential        |
|C++       |[The Standard - C++](https://isocpp.org/std/the-standard)       |[C++](#)       | GCC / G++        | build-essential, g++        |
|Dlang     |[D Programming Language: Home](https://dlang.org/)       |[Dlang](#)       | GCC / GDC        | build-essential, gdc        |
|Go        |[The Go Programming Language](https://go.dev/)       |[Go](#)       | Go         | golang        |
|Rust      |[Rust Programming Language](https://www.rust-lang.org/)       |[Rust](#)       | Rust (Crate)         | rustlang        |
|Java      |[Java Programming Language](https://docs.oracle.com/javase/8/docs/technotes/guides/language/)       |[Java](#)       | JDK         | openjdk-17-jdk        |
|x86_64    
 assembly  |[x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/)       |[x86_64Assembly](#)       | GCC / GAS         | build-essential        |
|ARM64
 assembly  |[Arm A64 Instruction Set Architecture](https://developer.arm.com/documentation/ddi0596/latest/)       |[ARM64 Assembly](#)       | GCC / GAS (AArch64)         | build-essential        |
|Bash      |[Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)       |[Bash](#)       | Bash         | bash  |
|Python    |[Welcome to Python.org](https://www.python.org/)       |[Python](#)       | Python         | python        |
|Ruby      |[Ruby Programming Language](https://www.ruby-lang.org/en/)       |[Ruby](#)       | Ruby         | ruby        |
|PHP       |[PHP: Hypertext Preprocessor](https://www.php.net/)       |[PHP](#)       | PHP         | php        |
|Perl      |[The Perl Programming Language](https://www.perl.org/)       |[Perl](#)       | Perl         | perl        |
|Lua       |[The Programming Language Lua](https://www.lua.org/)       |[Lua](#)       | Lua         | lua        |

## C
---

```c
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}

```

Build with:

```
   gcc -Wall -o helloworld helloworld.c  
``` 

Run with:


```
    ./helloworld
```

## C++
---

```cpp
#include <iostream>

int main()
{
    std :: cout << "Hello, World!" << std :: endl;
    return 0;
}

```

Build with:

```
   g++ -Wall -o helloworld helloworld.cpp  
``` 

Run with:


```
    ./helloworld
```

## Dlang
---

```d
import std.stdio

void main()
{
    writeln("Hello, World!");
}

```

Build with:

```
   gdc -Wall -o helloworld helloworld.cpp  
``` 

Run with:


```
    ./helloworld
```

## Go
---

```go
package main

import "fmt"

funct main(){
    fmt.Println("Hello, World!");
}

```

Build and run with:

```
   go run helloworld.go  
``` 
