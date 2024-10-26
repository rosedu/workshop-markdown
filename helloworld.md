# Helloworld Programmers
[Hello, World!](./helloworld.md)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.
The table below summarizes the programs.

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| -------- | -------------------- | ------- | --------------------- | ------------------------ |
| C        | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard) | [C](#C) | GCC | build-essential |
| C++  | [The Standard - C++](https://isocpp.org/std/the-standard) | [C++][#C++] | GCC / G++ | build-essential, g++ |

# C

```c
#include <stdio.h>
int main(void)
{
puts("Hello, World!");
return 0;
}
```

Builds with:

```console
gcc -Wall -o helloworld helloworld.
```

Run with:

```console
./helloworld
```

# C++

```c++
#include <iostream>
int main()
{
std::cout << "Hello, World!" << std::endl;
return 0;
```

Build with:

```console
g++ -Wall -o helloworld helloworld.cpp
```

Run with:

```console
./helloworld
```
