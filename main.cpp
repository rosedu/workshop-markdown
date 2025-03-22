#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

class A {
public:
    A() {
	std::cout << "A constructor" << std::endl;
    }
    ~A() {
	std::cout << "A destructor" << std::endl;
    }
};

//acest cod este sceris de copilto in nvim yeye

