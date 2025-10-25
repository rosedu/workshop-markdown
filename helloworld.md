# Helloworld Programs

![pozahello](/helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". Thespecified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| :--------|:--------------------:|:-------:|:---------------------:|-------------------------:| 
| C | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard)|[C](https://www.admiterepoli.com)|GCC|`build-essential`|
| C++|  [The Standard - C++](https://isocpp.org/std/the-standard)|[C++](https://www.admiterepoli.com)|GCC/G+|`build-essential, g++`|
| Python | [Welcome to python.org](https://www.python.org/)| [Python](https://www.python.org/downloads/)|Python|`Python`|

# C
```C
#include <stdio.h>

int main(void){

    puts("Hello, World!");

    return 0;
}
```
### Build With:
`gcc -Wall -o helloworld helloworld.c`

### Run With:

`./helloworld`

# C++
```C++
#include <iostream>

int main(){

    std::cout << "Hello, World!" << std::endl;

    return 0;
}
```

### Build With:
`g++ -Wall -o helloworld helloworld.cpp`

### Run With:
`g++ -Wall -o helloworld helloworld.cpp`

# Python
```Python
print("Hello, World!")
```

### Run With:
`python helloworld.py`