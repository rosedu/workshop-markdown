# Helloworld Programs

![hello, world](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.
The table below summarizes the programs:

# C

```C
#include <stdio.h>
int main(void)
{
	puts("Hello, World!");
	return 0;
}
```

Build with:

`gcc -Wall -o helloworld helloworld.c`

Run with:

`./helloworld`

# C++

```C++
#include <iostream>
int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
```

Build with:

`g++ -Wall -o helloworld helloworld.cpp`

Run with:

`./helloworld`

# Dlang

```d
import std.stdio;
void main()
{
	writeln("Hello, World!");
}
```

Build with:

`gdc -Wall -o helloworld helloworld.cpp`

Run with:

`./helloworld`

# Go

```go
package main
import "fmt"
func main() {
	fmt.Println("Hello, World!")
}
```

Build and run with:

`go run helloworld.go`

# Rust

```rust
fn main() {
	println!("Hello, World");
}
```

Build with:
`rustc hello.rs`

Run with:

`./helloworld`

# Java

```java
public class HelloWorld {
	public static void main(String[] args) {
		System.out.println("Hello, World!");
	}
}
```

Build with:

`javac HelloWorld.java`

Run with:

`java HelloWorld`

# x86_64 Assembly

Build with:

`TODO`

Run with:

`./helloworld`

# ARM64 Assembly

Build with:

`TODO`

Run with:

`./helloworld`

# Bahs

```bash
echo "Hello, world!"
```

Run with:

`bash helloworld.sh`

# Python

```bash
print("Hello, World!")
```

Run with:

`python helloworld.py`

# Ruby

```ruby
puts "Hello, World!"
```

Run with:

`ruby helloworld.rb`

# PHP

```php
<?php
echo "Hello, World!"
?>
```

Run with:

`./helloworld`

# Perl

```perl
print("Hello, World!\n")
```

Run with:

`perl helloworld.pl`

# Lua

```lua
print("Hello, World!")
```

Run with:

`lua helloworld.lua`