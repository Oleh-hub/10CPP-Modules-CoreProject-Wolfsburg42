#include <iostream>

void modifyByReference(int &ref) {
    ref = 20; // Modifies the original variable
}

void modifyByPointer(int *ptr) {
    if (ptr) {
        *ptr = 30; // Modifies the original variable
    }
}

int main() {
    int a = 10;
    int b = 10;

    modifyByReference(a);
    std::cout << "Value of a after modifyByReference: " << a << std::endl; // Output: 20

    modifyByPointer(&b);
    std::cout << "Value of b after modifyByPointer: " << b << std::endl; // Output: 30

    return 0;
}