## Helloworld Programs

![helloworld](../helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". Thespecified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

<!-- ...existing code... -->
The table below summarizes the programs:

| Language    | File name        | How to run / compile |
|-------------|------------------|----------------------|
| C           | hello.c          | gcc hello.c -o hello && ./hello |
| C++         | hello.cpp        | g++ hello.cpp -o hello && ./hello |
| Java        | HelloWorld.java  | javac HelloWorld.java && java HelloWorld |
| Python      | hello.py         | python3 hello.py     |
| JavaScript  | hello.js         | node hello.js        |
| Bash        | hello.sh         | bash hello.sh        |
| Go          | hello.go         | go run hello.go      |
| Rust        | main.rs          | cargo run (în proiect) or rustc main.rs && ./main |
<!-- ...existing code... -->

# C
```console
#include <stdio.h>

int main(void)
{
	puts("Hello, World!");
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

int main()
{
	std::cout << "Hello, World!" << std::endl;        return 0;
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
import std.stdio;

void main()
{
	writeln("Hello, World!");
}
```

Build with:

```console
gdc -Wall -o helloworld helloworld.cpp
```

Run with:
```console
./helloworld
```
# Rust
```console
fn main() {
	println!("Hello, World");
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
	public static void main(String[] args){
		System.out.println("Hello, World!");
	}
}
```

Build with:

```console
javac HelloWorld.java
```

Run with:

```console
java HelloWorld
```

# x86_64 Assembly
```console

```
Build with:

```console
TODO
```

Run with:

```console
./helloworld
```
# ARM64 Assembly
```console

```
Build with:

```console
TODO
```

Run with:

```console
./helloworld
```

# Bash
```console
echo "Hello, World!"
```

Run with:

```console
bash helloworld.sh
```

# Python
```console
print("Hello, World!")
```

Run with:

```console
python helloworld.py
```

# Ruby
```console
puts "Hello, World!"
```

Run with:
```console
ruby helloworld.rb
```

# PHP
```console
<?php
echo "Hello, World!"
?>
```

Run with:

```console
./helloworld
```
# Perl
```console
print("Hello, World!\n")
```

Run with:

```console
perl helloworld.pl
```

# Lua
```console
print("Hello, World!")
```

Run with:

```console
lua helloworld.lua
```

