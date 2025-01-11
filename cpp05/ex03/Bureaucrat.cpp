#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Incognito"), _grade(150)
{
}


Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &rhc)
{
	out << rhc.getName() << ", bureaucrat grade " << rhc.getGrade() << ".";
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::incGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signAForm(AForm &rhs)
{
	rhs.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " <<  _name << " has executed " << form.getName() << "." << std::endl;
	}
	catch (std::exception & err)
	{
		std::cout << "Bureaucrat " <<  _name << " couldn't execute " << form.getName() << "." << std::endl;
		std::cerr <<  err.what() << std::endl;
	}

}