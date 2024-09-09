#include <iostream>
#include <string>

class SimpleClass
{
	public:
		SimpleClass(void) {
			std::cout << "SimpleClass instance" << std::endl;
		}
		~SimpleClass(void) {
			std::cout << "SimpleClass instance destroyed" << std::endl;
		}
		void bar(char const c) const{
			std::cout << "instance.bar(char const c) const is being called, c == " << c << std::endl;
		}
		void bar(int const i) const{
			std::cout << "instance.bar(int const i) const is being called, i == " << i << std::endl;
		}
		void bar(float const f) const{
			std::cout << "instance.bar(float const f) const is being called, f == " << f << std::endl;
		}
		void bar (SimpleClass &z) const {
			std::cout << "instance.bar (SimpleClass z) const is being called, &z == " << &z << std::endl;
		}

};

int main(void)
{
	SimpleClass a;
	SimpleClass b;
	SimpleClass c;

	a.bar('a');
	b.bar(42);
	c.bar(42.42f);
	a.bar(b);
}
