### Helloworld Programs

---

![HelloWorldPhoto](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.
The table below summarizes the programs:

| Language| Language (Spec) Site | Section | Build / Run Toolchain | Debian/Ubuntu Packages |
|---------|----------------------|---------|-----------------------|------------------------|
|     C   |                   [The Standard - C](https://www.iso-9899.info/wiki/The_Standard)   |     [C](#c)    |   GCC                    |          build-essential              |
|    C++     |                [The Standard - C++](https://isocpp.org/std/the-standard)      |   [C++](#c++)      |      GCC / G++                 |         build-essential , g++               |
|   Rust      |               [Rust Programming Language](https://www.rust-lang.org/)       | [Rust](#rust)        | Rust(Crate)                      |              rustlang          |


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

```c++
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

# Rust
```rust
fn main() {
    println!("Hello, World!");
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
