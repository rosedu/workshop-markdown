# My first Markdown file - B.B.

![HelloWorld_image](./helloworld.png)

## Introduction
We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.

## Languages used:
- C
- C++
- Python

TO DO:
- [x] add table
- [x] add code examples

## Table
| Languages | Language (Spec) Site | Build / Run Toolchain |
| --------- | -------------------- | --------------------- |
| C         | [The Standar - C](https://www.iso-9899.info/wiki/The_Standard)| GCC
| C++ | [The Standard - C++](https://www.iso-9899.info/wiki/The_Standard) | GCC / G++



C:
```C
#include <stdio.h>
int main(void)
{
puts("Hello, World!");
return 0;
}
```

C++:
```C++
#include <iostream>
int main()
{
std::cout << "Hello, World!" << std::endl;
return 0;
}
```