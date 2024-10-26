# Helloworld Programs

![hello-world](./helloworld.png)

We list below Helloworld programs for diﬀerent programming languages, i.e. programs that print "Hello, World!". The speciﬁed compiler or interpreter is required for each programming languages.
The table below summarizes the programs:

| Language | Language (Spec) Site   | Section     | Build / Run Toolchain | Debian / Ubuntu Packages |
| :------- | :--------------------- | :---------- | :-------------------- | :----------------------- |
| C        | [The Standard - C]()   | [C](#C)     | GCC                   | `build-essential`        |
| C++      | [The Standard - C++]() | [C++](#C++) | GCC                   | `build-essential`,`g++`  |

## C

```C
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

## C++

```C++
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std;
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
