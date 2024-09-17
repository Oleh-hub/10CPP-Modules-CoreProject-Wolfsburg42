/* fabs
Understanding and Using Floating Point Numbers
https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html
*/

#include <iostream>
#include <cmath> // Include the cmath header for fabs

#define EPSILON 1.0e-7
#define flt_equals(a, b) (fabs((a) - (b)) < EPSILON)

int main() {
	double x = 0.1 + 0.2;
	double y = 0.3;

	if (flt_equals(x, y)) {
		std::cout << "x and y are equal within the precision of EPSILON." << std::endl;
	} else {
		std::cout << "x and y are not equal." << std::endl;
	}
	std::cout << "a - b = " << x - y << std::endl;
	std::cout << "1.0e0 - 1.0e1 = " << 1.0e0 - 1.0e1 << std::endl;

	return 0;
}