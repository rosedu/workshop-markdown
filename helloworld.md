## Helloworld Programs

![hello](helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The
specified compiler or interpreter is required for each programming languages.
The table below summarizes the programs:
|Language|Language (Spec) Site|Section|Build / Run Toolchain|Debian / Ubuntu Packages|
|--------|--------------------|-------|---------------------|------------------------|
|C|[The Standard - C](https://www.iso-9899.info/wiki/The_Standard)|[C](#c)|GCC|`build-essential`|
|C++|[C++](https://isocpp.org/std/the-standard)|[C++](#c-1)|GCC / G++|`build-essential , g++`|
|Dlang|[D Programming Language: Home](https://dlang.org/)|[Dlang](#dlang)|GCC / GDC|`build-essential , gdc`|

## C

``` C
#include <stdio.h>
int main(void)
{
	puts("Hello, World!");
	return 0;
}
```

Build with:
```Bash
gcc -Wall -o helloworld helloworld.c
```

Run with:
```Bash
./helloworld
```

## C++

``` C++
#include <iostream>
int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
```

Build with:
```Bash
g++ -Wall -o helloworld helloworld.cpp
```

Run with:
```Bash
./helloworld
```

## Dlang

```dlang
import std.stdio;
void main()
{
	writeln("Hello, World!");
}

```

Build with:
```Bash
gdc -Wall -o helloworld helloworld.cpp
```

Run with:
```Bash
./helloworld
```