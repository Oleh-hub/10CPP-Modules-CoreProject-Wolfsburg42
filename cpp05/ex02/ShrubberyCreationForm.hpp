#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <string>
# include <iostream>


class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm();
		std::string _target;
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();
		std::string getTargetName() const;
		virtual void execute(Bureaucrat const & executor) const; // the function is made absulute abstuct, since all the children classes R supposed 2 do different things
};
#endif // SHRUBBERYCREATIONFORM_HPP