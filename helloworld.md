# Helloworld Programs

![hello-world](./helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". The specified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| :--------| :--------------------| :-------| :---------------------| :------------------------|
| C        | [The standard - C]() | [C]()   | GCC                   | `build-essential`        |
| C++      | [The standard - C++]() | [C++]()| GCC / G++            | `build-essential, g++`   |

## C

```C

#include <stdio.h>

int main(void) {
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

```C++

#include <iostream>

int main() {
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
