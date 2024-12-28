#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Incognito"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
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
