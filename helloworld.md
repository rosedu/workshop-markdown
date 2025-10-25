# Helloworld Programs
![Hello, World!](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec / Home) | Site Section | Build / Run Toolchain | Debian / Ubuntu Packages |
|-----------|------------------------|---------------|----------------------|---------------------------|
| C | [The Standard - C](https://www.open-std.org/jtc1/sc22/wg14/) | C | GCC | `build-essential` |
| C++ | [The Standard - C++](https://isocpp.org/) | C++ | GCC / G++ | `build-essential, g++` |
| Dlang | [D Programming Language: Home](https://dlang.org/) | Dlang | GCC / GDC | `build-essential, gdc` |
| Go | [The Go Programming Language](https://golang.org/) | Go | Go | `golang` |
| Rust | [Rust Programming Language](https://www.rust-lang.org/) | Rust | Rust (Crate) | `rustlang` |
| Java | [Java Programming Language](https://www.java.com/) | Java | JDK | `openjdk-17-jdk` |
| x86_64 Assembly | [x86 and amd64 Instruction Set Reference](https://www.felixcloutier.com/x86/) | Assembly | GCC / GAS | `build-essential` |
| ARM64 Assembly | [Arm A64 Instruction Set (AArch64)](https://developer.arm.com/documentation/ddi0602/2024-03/Base-Instructions?lang=en) | Assembly | GCC / GAS | `build-essential` |
| Bash | [Bash Reference Manual](https://www.gnu.org/software/bash/manual/) | Bash | Bash | `bash` |
| Python | [Welcome to Python.org](https://www.python.org/) | Python | Python | `python` |
| Ruby | [Ruby Programming Language](https://www.ruby-lang.org/) | Ruby | Ruby | `ruby` |
| PHP | [PHP: Hypertext Preprocessor](https://www.php.net/) | PHP | PHP | `php` |
| Perl | [The Perl Programming Language](https://www.perl.org/) | Perl | Perl | `perl` |
| Lua | [The Programming Language Lua](https://www.lua.org/) | Lua | Lua | `lua` |

# C
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

# C++
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

# Dlang
```d
import std.stdio;

void main()
{
    writeln("Hello, World!");
}
```
Build with:

```bash
gdc -Wall -o helloworld helloworld.d
```
Run with:

```bash
./helloworld
```

# Go
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

# Rust

```rust
fn main() {
    println!("Hello, World!");
}
```
Build with:

```bash
rustc helloworld.rs
```
Run with:

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
Build with:

```bash
javac HelloWorld.java
```
Run with:

```bash
java HelloWorld
```
# x86_64 Assembly

Build with:

```bash
TODO
```
Run with:

```bash
./helloworld
```
# ARM64 Assembly

Build with:

```bash
TODO
```
Run with:

```bash
./helloworld
```

# Bash
```bash
echo "Hello, World!"
```
Run with:

```bash
bash helloworld.sh
```

#Python
```python
print("Hello, World!")
```
Run with:

```bash
python helloworld.py
```

# Ruby
```ruby
puts "Hello, World!"
```
Run with:

```bash
ruby helloworld.rb
```

# PHP
```php
<?php echo "Hello, World!"; ?>
```
Run with:

```bash
php helloworld.php
```

# Perl
```perl
print("Hello, World!\n");
```
Run with:

```bash
perl helloworld.pl
```

# Lua
```lua
print("Hello, World!")
```
Run with:

```bash
lua helloworld.lua
```