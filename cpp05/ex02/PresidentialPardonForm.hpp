#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"
# include <string>
# include <iostream>

class PresidentialPardonForm : public AForm
{
		private:
		PresidentialPardonForm();
		std::string _target;
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();
		std::string getTargetName() const;
		virtual void execute(Bureaucrat const & executor) const; 
};

#endif // PRESIDENTIALPARDONFORM.HPP