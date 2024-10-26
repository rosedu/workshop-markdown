# Helloworld Programs

![Alt text](/workshop-markdown/helloworld.png)

We list below Helloworld programs for different programming languages, i.e programs that print "Hello, World!". The specified compiler or interpreter is requiered for each programming languages.

The table below summarizez the programs:

| Language |      Language(Spec)Site      |   Section   |       Build/Run Toolchain     | Debian/Ubuntu Packages    |
|----------|------------------------------|-------------|-------------------------------|---------------------------|
|C         | [The standard - C](https://en.wikipedia.org/wiki/C_(programming_language))| [C](https://www.geeksforgeeks.org/c-language-introduction/)| GCC | `build-essential`|
|C++       | [The standard - C++](https://en.wikipedia.org/wiki/C%2B%2B)| [C++](https://www.w3schools.com/cpp/cpp_intro.asp)| GCC/ G++| `build-essential, g++` |
|Dlang     | [D programming Language Homw](https://www.google.com/) | [Dlang](https://www.google.com/) | GCC / GDC | `build-essential, gdc` |
|Go        |
|Rust      |
|Java      |
|x86_64 assembly|
|ARM64 assembly |
|Bash           | 
|Python         |

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
    
```gcc -Wall -o helloworld helloworld.c```

Run with:

```./hellowworld```

## C++
```c++
#include <iostream>

int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
```

Build with:
    
```g++ -Wall -o helloworld helloworld.cpp```

Run with:

```./helloworld```

## Dlang
```dlang
import std.stdio;

void main()
{
    writeln("Hello, World!");
}
```

Build with:
    
```gdc -Wall -o  helloworld helloworld.cpp```

Run with:

```./hellowordl```

## Go
```go
package main

import "fmt"

func main() {
    fmt.Println("Hello, World!")
}

```
Build and run with:
    
```go run helloworld.go```

## Rust
```rust
fn main() {
    println!("Hello, World");
}
```

Build with:
    
```rustc hello.rs```

Run with:

```./helloworld```

## Java
```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```
Build with:
    
```javac Helloworld.java```

Run with:

```java Helloworld```

## x86_64 Assembly
```assembly
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

Build with:

```TODO```

Run with:

```./helloworld```

### TODO

## ARM64 Assembly

Build with:
    
```TODO```

Run with:

```./helloworld```

## Bash

```echo``` "Hello, World!"

Run with:

```bash hellowordl.sh```

## Python

```print("Hello, World!")```

Run with:

```python hellowordl.py```

## Ruby

```puts``` "Hello, world!"

Run with:

```ruby hellowordl.rb```

## PHP

```php
<?php
echo "Hello, World!"
?>
```

Run with:

```./hellowordl```

## Perl

```perl
print("Hello, World!\n")
```

Run with:

```perl helloworld.perl```

## Lua

```lua
print("Hello, World!")
```

Run with:

```lua helloworld.lua```


















