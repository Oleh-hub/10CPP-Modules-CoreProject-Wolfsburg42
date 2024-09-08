#include <iostream>

class MyClass {
    // These members are private by default despite being b4 'private:' zone
    int privateVar;
    void privateMethod() {
        std::cout << "Private method called" << std::endl;
    }

public:
    // Public members
    int publicVar;
    void publicMethod() {
        std::cout << "Public method called" << std::endl;
    }

private:
    // Private members
    int anotherPrivateVar;
    void anotherPrivateMethod() {
        std::cout << "Another private method called" << std::endl;
    }
};

int main() {
    MyClass obj;

    // Accessing public members
    obj.publicVar = 10;
    obj.publicMethod();

    // Accessing private members (will cause compilation error)
    // obj.privateVar = 20; // Error: 'int MyClass::privateVar' is private within this context
    // obj.privateMethod(); // Error: 'void MyClass::privateMethod()' is private within this context

    return 0;
}