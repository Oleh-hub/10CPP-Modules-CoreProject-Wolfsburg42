/* "checking statemenaL: 'numerical overflow is one of a programmer's most common concerns. If you add one to the largest possible unsigned integer, the number rolls back to zero.'
https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html" */

#include <iostream>
#include <limits> // Include the limits header for numeric_limits

int main() {
    // Get the maximum values for different integer types
    int max_int = std::numeric_limits<int>::max();
    unsigned int max_uint = std::numeric_limits<unsigned int>::max();
    long max_long = std::numeric_limits<long>::max();
    unsigned long max_ulong = std::numeric_limits<unsigned long>::max();

    // Add 1 to the maximum values
    int overflow_int = max_int + 1;
    unsigned int overflow_uint = max_uint + 1;
    long overflow_long = max_long + 1;
    unsigned long overflow_ulong = max_ulong + 1;

    // Print the results
    std::cout << "Max int: " << max_int << std::endl;
    std::cout << "Max int + 1: " << overflow_int << std::endl;

    std::cout << "Max unsigned int: " << max_uint << std::endl;
    std::cout << "Max unsigned int + 1: " << overflow_uint << std::endl;

    std::cout << "Max long: " << max_long << std::endl;
    std::cout << "Max long + 1: " << overflow_long << std::endl;

    std::cout << "Max unsigned long: " << max_ulong << std::endl;
    std::cout << "Max unsigned long + 1: " << overflow_ulong << std::endl;

    return 0;
}