# Helloworld Programs

![img!](helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". Thespecified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain |
|----------|----------------------|---------|-----------------------|
| C | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard) | C | GCC |
| C++ | [The Standard - C++](https://isocpp.org/std/the-standard) | C++ | GCC/G++ |

# C

```c
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    return 0;
}
```

Build with
```console
gcc -Wall -o helloworld helloworld.c
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