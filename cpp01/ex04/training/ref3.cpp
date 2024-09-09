#include <iostream>
#include <string>

class Student{
	private:
		std::string _login;
	public:
		Student(std::string login) : _login (login) {
			// std::cout << "Student " << _login << " is born" << std::endl;
		}
		std::string&	getloginRef() {
			return this->_login;
		}
		std::string const&	getloginRefConst() const {
			return this->_login;
		}
		std::string*	getloginPtr() {
			return &this->_login;
		}
		std::string const* getloginPtrConst() const {
			return &this->_login;
		}
};

int main (void)
{
	// Student bob ("bfubar");
	Student bob = Student("bfubar");
	Student const jim = Student("jfubar");

	std::cout << &bob.getloginRefConst() << " " << &jim.getloginRefConst()  << std::endl; // the addresses
	std::cout << bob.getloginRefConst() << " " << jim.getloginRefConst()  << std::endl;
	std::cout <<  bob.getloginPtrConst() << " " << jim.getloginPtrConst() << std::endl; // the same address
	std::cout <<  *bob.getloginPtrConst() << " " << *jim.getloginPtrConst() << std::endl;
	// std::cout <<bob.getloginRef() << std::endl;
	std::cout <<   std::endl;
	std::cout << &bob.getloginRef()  << " " << bob.getloginPtr() << std::endl; // another funciton - the addresses becaue the same 'return;'
	
	bob.getloginRef() = "nifigaselogin";
	
	std::cout << &bob.getloginRef()  << " " << bob.getloginPtr() << std::endl; // the value of _login does not change the address
	std::cout << bob.getloginRef()  << " " << *bob.getloginPtr() << std::endl;

	
	*bob.getloginPtr() = "figA-figaA";
	std::cout <<   std::endl;
	std::cout << bob.getloginRef()  << " " << *bob.getloginPtr() << std::endl;
}
