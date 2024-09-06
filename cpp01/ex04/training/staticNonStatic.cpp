/* roi 240906
static - belongs to a class
non-static - belongs to instances of the class */

#include <iostream>
#include <string>

class Example {
private:
    static int staticCount; // Static member variable
    int instanceCount;      // Non-static member variable

public:
    Example() : instanceCount(0) {
        staticCount++;
    }

    ~Example() {
        staticCount--;
    }

    // Static member function (class method)
    static int getStaticCount() {
        return staticCount;
    }

    // Non-static member function (instance method)
    int getInstanceCount() const {
        return this->instanceCount;
    }

    // Non-static member function to increment instanceCount
    void incrementInstanceCount() {
        this->instanceCount++;
    }
};

// Definition of the static member variable
int Example::staticCount = 0;

int main() {
    Example e1;
    Example e2;

    e1.incrementInstanceCount();
    e1.incrementInstanceCount();
    e2.incrementInstanceCount();

    std::cout << "Static count (number of instances): " << Example::getStaticCount() << std::endl;
    std::cout << "Instance count for e1: " << e1.getInstanceCount() << std::endl;
    std::cout << "Instance count for e2: " << e2.getInstanceCount() << std::endl;

    return 0;
}