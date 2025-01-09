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
		std::string getTargetName();
		virtual void jklm();
};
#endif // SHRUBBERYCREATIONFORM_HPP