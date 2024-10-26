# Helloworld Programs

![Hello](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". Thespecified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language        | Language (Spec) Site                   | Section           | Build / Run Toolchain | Debian / Ubuntu Packages |
|-----------------|----------------------------------------|-------------------|-----------------------|--------------------------|
| C               | [The Standard - C](https://google.com/)                    | [C](#c)               | GCC                   | `build essential`        |
| C++             | [The Standard - C++](https://google.com/)                   | [C++](#c++)             | GCC / G++             | `build essential, g++`   |
| Dlang           | [D Programming Language: Home](https://google.com/)         | [Dlang](#dlang)           | GCC / GDC             | `build essential, gcc`   |
| Go              | [The Go Programming Language](https://google.com/)          | [Go](#go)              | Go                    | `golang`                 |
| Rust            | [Rust Programming Language](https://google.com/)            | [Rust](#rust)            | Rust (Crate)          | `rustlang`               |
| Java            | [Java Programming Language](https://google.com/)            | [Java](#java)            | JDK                   | `openjdk-17-jdk`         |
| x86_64 assembly | [x86 and amd64 instruction reference](https://google.com/)  | [x86_64 Assembly](#x86_64-assembly) | GCC /GAS              | `build essential`        |
| ARM64 assembly  | [Arm A64 Instruction Set Architecture](https://google.com/) | [ARM64 Assembly](#arm64-assembly)  | GCC / GAS (AArch64)   | `build essential`        |
| Bash            | [Bash Reference Manual](https://google.com/)                | [Bash](#bash)            | Bash                  | `bash`                   |
| Python          | [Welcome to Python.org](https://google.com/)                | [Python](#python)          | Python                | `python`                 |
| Ruby            | [Ruby Programming Language](https://google.com/)            | [Ruby](#ruby)            | Ruby                  | `ruby`                   |
| PHP             | [PHP: Hypertext Preprocessor](https://google.com/)          | [PHP](#php)             | PHP                   | `php`                    |
| Perl            | [The Perl Programming Language](https://google.com/)        | [Perl](#perl)            | Perl                  | `perl`                   |
| Lua             | [The Programming Language Lua](https://google.com/)         | [Lua](#lua)             | Lua                   | `lua`                    |

# C
```c
#include <stdio.h>

int main(void)
{
	puts("Hello, World!");
	return 0;
}
```
### Build with:

```bash
gcc -Wall -o helloworld helloworld.c
```

### Run with:

```bash
./helloworld
```

# C++
```c++
#include <iostream>

int main()
{
        std::cout << "Hello, World!" << std::endl;
        return 0;
}
```
### Build with:

```bash
g++ -Wall -o helloworld helloworld.cpp
```

### Run with:

```bash
./helloworld
```

# Dlang
```d
import std.stdio;

void main()
{
    writeln("Hello, World!");
}
```

### Build with:
```bash
gdc -Wall -o helloworld helloworld.cpp
```

### Run with:
```bash
./helloworld
```

# Go
```go
package main

import "fmt"

func main()
{
    fmt.Println("Hello, World!");
}
```

### Build and run with:
```bash
go run helloworld.go
```

# Rust
```rust
fn main() {
    println!("Hello, World!");
}
```

### Build with:
```bash
rustc hello.rs
```

### Run with:
```bash
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

### Build with:
```bash
javac HelloWorld.java
```

### Run with:
```bash
java HelloWorld
```

# x86_64 Assembly
```bash


```

### Build with:
```bash
TODO
```

### Run with:
```bash
./helloworld
```

# ARM64 Assembly
```bash


```

### Build with:
```bash
TODO
```

### Run with:
```bash
./helloworld
```

# Bash
```bash
echo "Hello, World!"
```

### Run with:
```bash
bash helloworld.sh
```
# Python
```python
print("Hello, World!")
```

### Run with:
```bash
python helloworld.py
```

# Ruby
```ruby
puts "Hello, World!"
```

### Run with:
```bash
ruby helloworld.rb
```

# PHP
```php
<?php
echo "Hello, World!"
?>
```

### Run with:
```bash
./helloworld
```

# Perl
```perl
print("Hello, World!\n")
```

### Run with:
```bash
perl helloworld.pl
```

# Lua
```lua
print("Hello, World!")
```

### Run with:
```bash
lua helloworld.lua
```