#include <math.h>
#include <iostream>

struct str_complex {
	
private:
	double re, im, mod, arg;
public:
	str_complex(double a_re, double a_im) {
		re = a_re; im = a_im;
		mod = sqrt(re * re + im * im);
		arg = atan2(im, re);
	}
	double get_re()
		{ return re; }
	double get_im()
		{ return im; }
	double modulo()
		{ return mod; }
	double argument()
		{ return arg; }
};

int main(void)
{
	str_complex z(2.7, 3.8);
	std::cout << "Modulo of z = " << z.modulo() << std::endl;
	std::cout << "Arc tangent of z = " << z.argument() << std::endl;
	std::cout << "real part of complex number = " << z.get_re() << std::endl;
	std::cout << "imaginable part of complex number = " << z.get_im() << std::endl;
	return 0;
}