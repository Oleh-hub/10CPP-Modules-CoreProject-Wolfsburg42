#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm name consturctor was called with target _name: " << getTargetName() << " " << this << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
// 	std::cout << "operator= function is been called for " << getName() << " " << this << " " << *this << std::endl;
	if (this != &rhs)
	{
/* 		_name = rhs._name;
		_signed = rhs._signed;
		_grade2sign = rhs._grade2sign;
		_grade2exe = rhs._grade2exe; */
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	std::cout << "operator= function is been called for " << getName() << " " << this << " " /* << *this  */<< std::endl;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm(rhs), _target(rhs._target)
{
	std::cout << "ShrubberyCreationForm copy constuctor was called " << this << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor was called " << this << std::endl;
}

/* 
	Creates a file <target>_shrubbery in the working directory, and writes ASCII trees inside it.
 */
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw NotSignedException();
	if (this->getGrade2exe() < executor.getGrade() )
		throw GradeTooHighException();
	std::string filename = getTargetName() + "_shrubbery";
	std::ofstream ofs(filename.c_str(), std::ofstream::out);
	ofs << 	"       _-_\n"
	   		"    /~~   ~~\\\n"
	   		" /~~         ~~\\\n"
	   		"{               }\n"
	   		" \\  _-     -_  /\n"
	   		"   ~  \\\\ //  ~\n"
	   		"_- -   | | _- _\n"
	   		"  _ -  | |   -_\n"
	   		"      // \\\\";
	ofs.close();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}

const std::string & ShrubberyCreationForm::getTargetName() const
{
	return _target;
}