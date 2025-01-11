#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
	public:
		Intern();
		Intern(const Intern &rhs);
		// Intern(const Intern &rhs) = default;  // could just make it this way wihtout implimentation!
		Intern &operator=(const Intern &rhs);
		// Intern &operator=(const Intern &rhs) = default;  // could just make it this way wihtout implimentation!
		~Intern();
		AForm *makeForm(const std::string &formName, const std::string &target);
};
#endif // INTERN_HPP