#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <string>
# include <iostream>

class RobotomyRequestForm :  public AForm
{
	private:
		RobotomyRequestForm();
		std::string _target;
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		RobotomyRequestForm & operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();
		std::string &getTargetName() const;
		virtual void execute(Bureaucrat const & executor) const;
};
#endif // ROBOTOMYREQUESTFORM_HPP