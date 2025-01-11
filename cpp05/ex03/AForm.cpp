#include "AForm.hpp"

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::qetGrade2sign() const
{
	return _grade2sign;
}

int AForm::getGrade2exe() const
{
	return _grade2exe;
}

/*  250101 roi
I am not sure if an attempt to sign the AForm by inproper rate bureaucrat should be terminated by thrown error mmsg
if should net throw must be replaced with  std::cout << "The AForm grade is too high!"; */
void AForm::beSigned (const Bureaucrat &rhs)
{
	// <bureaucrat> signed <AForm>
	if (!_signed && _grade2sign >= rhs.getGrade())
	{
		this->_signed = true;
		std::cout << rhs.getName() << " signed " << getName()  << std::endl;
	}
	else 
	{
		// <bureaucrat> couldn’t sign <AForm> because <reason>.
		std::cout << rhs.getName() << " couldn’t sign " << getName() << " because ";
		if (_signed)
			std::cout << "the AForm is already signed" << std::endl;
		else
			// throw GradeTooHighException(); // "The AForm grade is too high!"
			std::cout << "the bureaucrat grade is not high enough" << std::endl;
	}
}

AForm::AForm(std::string const &name, int grade2sign, int grade2exe) : _name(name), _signed(false), _grade2sign(grade2sign), _grade2exe(grade2exe)
{
	// grade2sign and grade2exe checking
	if (grade2sign > 150 || grade2exe > 150)
		throw GradeTooLowException();
	if (grade2sign < 1 || grade2exe < 1)
		throw GradeTooHighException();
}

AForm & AForm::operator=(const AForm &rhs)
{
	if (this!= &rhs)
	{
		_name = rhs._name;
		_signed = rhs._signed;
		_grade2sign = rhs._grade2sign;
		_grade2exe = rhs._grade2exe;
	}
	return *this;
}

AForm::AForm(const AForm &rhs)
{
	*this = rhs;
}

AForm::~AForm()
{
}

std::ostream & operator<<(std::ostream &out, const AForm &rhs)
{
	out << "AForm: " << rhs.getName() << "has grade to sign " << rhs.qetGrade2sign() << ", grade to execute "<< rhs.getGrade2exe() << ", current state 'if it is signed': "<< rhs.getSigned();
	return out;
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return "The Form grade is too high!";
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return "The Form grade is too low!";
}

const char * AForm::NotSignedException::what() const throw()
{
	return "The Form is not signed!";
}

/* void  AForm::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw NotSignedException();
	if (this->_grade2exe < executor.getGrade() )
		throw GradeTooHighException();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
} */