#include <iostream>
#include <string>

class Student {

private:
	std::string _login;
public:
	Student(std::string login) : _login(login) {
		std::cout << "Student " << this->_login << " is born" << std::endl;
	}
	Student() : _login("ldefault") {
		std::cout << "Student " << this->_login << " is born" << std::endl;
	}
	~Student() {
		std::cout << "Student " << this->_login << " died" << std::endl;
	}
};

int main() {
	Student		bob = Student("bfubar");
	Student*	jim = new Student ("jfubar");
	Student*	students = new Student[42];

	/// do some stuff here

	delete [] students;
	delete jim;	// Student jfubar died
	return 0;	// Student bfubar died
}