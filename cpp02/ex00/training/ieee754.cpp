/*  240912 roi gpt
checking if the pc has IEEE 754 floating point standard
if so the executtion of this code should give the following output:

Size of float: 4 bytes
Size of double: 8 bytes
Size of long double: 16 bytes

Float precision: 6 decimal digits
Double precision: 15 decimal digits
Long double precision: 18 decimal digits

Float min: 1.17549e-38
Float max: 3.40282e+38
Double min: 2.22507e-308
Double max: 1.79769e+308
Long double min: 3.3621e-4932
Long double max: 1.18973e+4932

NaN: nan
Infinity: inf
Is NaN: 1
Is Infinity: 1 */

#include <iostream>
#include <limits>
#include <cmath>

int main() {
    // Check sizes
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;

    // Check precision and range
    std::cout << "Float precision: " << std::numeric_limits<float>::digits10 << " decimal digits" << std::endl;
    std::cout << "Double precision: " << std::numeric_limits<double>::digits10 << " decimal digits" << std::endl;
    std::cout << "Long double precision: " << std::numeric_limits<long double>::digits10 << " decimal digits" << std::endl;

    std::cout << "Float min: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Float max: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Double min: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Double max: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Long double min: " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "Long double max: " << std::numeric_limits<long double>::max() << std::endl;

    // Check special values
    float nan = std::numeric_limits<float>::quiet_NaN();
    float inf = std::numeric_limits<float>::infinity();
    std::cout << "NaN: " << nan << std::endl;
    std::cout << "Infinity: " << inf << std::endl;

    // Check if NaN and infinity behave as expected
    std::cout << "Is NaN: " << std::isnan(nan) << std::endl;
    std::cout << "Is Infinity: " << std::isinf(inf) << std::endl;

    return 0;
}