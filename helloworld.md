# Helloworld programs

[def]: ./helloworld.png
![Helloworld image][def]

We list below Helloworld programs for different programming languages, i.e. programs that print "Hello, World!". Thespecified compiler or interpreter is required for each programming languages.The table below summarizes the programs

| Language | Language(Spec) Site | Section | Build/RUn Toolchain | Debian/Ubuntu Pacakages |
| --- | --- | --- | --- | --- |
| C | [The Standard - C](https://www.iso-9899.info/wiki/The_Standard) | [C] | GCC | build essential |
Go | [The Go Programming Language](https://go.dev/) | GO | Go | Golang 
| blabla bla| bla | blaaaaa | blehhh | blah?

## C

```C
#include <stdio.h>

int main(void){
    puts("Hello world");
    return 0;
}
```

Build with:

```bash
gcc -Wall -o helloworld helloworld.c
```

Run with

```bash
./helloworld
```

## GO

```Go

package main 

import "fmt"

func main(){
    fmt.Println("Hello Wolrd")
}
```

Build and run with:

```console
go run helloworld.go
```

