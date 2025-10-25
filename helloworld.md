# Helloworld Programs

![poza](helloworld.png)

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". Thespecified compiler or interpreter is required for each programming languages.

The table below summarizes the programs:

| Language | Language (Spec) Site | Section | Build / Run Toolchain | Debian / Ubuntu Packages |
| :----------- |:--------------:  | -------------:| -------------:| -------------:|
| C            | [The standard C](https://www.iso-9899.info/wiki/The_Standard)  | C           | GCC| build-esential|
| C++          | [The standard C++](https://isocpp.org/std/the-standard)        | C++       | GCC/G++| build-esential, g++|
| Dlang        | [D programming language:HOME](https://dlang.org/)        |  Dlang   | GCC/GDC| build-esential, gdc|

## C

```C
#include <stdio.h>

int main(void){        
    puts("Hello, World!");        
    return 0;
}
```

Build with:

```gcc -Wall -o helloworld helloworld.c```

Run with 

```./helloworld```

## C++

```C++
#include <iostream>

int main(){        
    std::cout << "Hello, World!" << std::endl;        
    return 0;
}
```

Build with:

```g++ -Wall -o helloworld helloworld.cpp```

Run with 

```./helloworld```

## Dlang

```D
import std.stdio;
void main(){    
    writeln("Hello, World!");
}
```

Build with:

```g++ -Wall -o helloworld helloworld.cpp```

Run with 

```./helloworld```





