#include <iostream>
#include <string>

void byPtr(std::string *str)
{
	*str += " and ponies";
}

void byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void byRef(std::string &str)
{
	str += " and rainbows";
}

void byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int main (void)
{

	std::string str = "I like unicorns";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);
	
	str = "I like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
}