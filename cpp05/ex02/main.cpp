#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "colors.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iomanip>
#include <iostream>

int main()
{
	Bureaucrat vasia("Vasia", 100);
	try
	{
		std::cout << vasia.getName () << " " << vasia.getGrade() << std::endl;

		ShrubberyCreationForm b28("home");
		AForm *b28A = &b28;
		std::cout << b28A->getName() << " " << b28A->getSigned() << " " << b28A << " " << &b28 << std::endl;
		std::cout << RED;
		std::cout << RESET;
		ShrubberyCreationForm copy("job");
		std::cout << copy.getName() << " the form " << copy.getName() << " for target: " << copy.getTargetName() << std::endl;
		std::cout << GREEN;
		copy = b28;
		std::cout << copy.getName() << " this form is for target: " << copy.getTargetName() << std::endl;
		std::cout << RESET;
		ShrubberyCreationForm z(b28);
		
		std::cout << std::endl << BOLD "CHECKING  ShrubberyCreationForm::execute(Bureaucrat const & executor) if NOT signed" RESET << std::endl;
		b28.execute(vasia); //"The Form is not signed!" is trown
		vasia.signAForm(b28);
		std::cout << BLUE;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << std::endl << DIM "CHECKING  ShrubberyCreationForm::execute(Bureaucrat const & executor) if SIGNED" RESET << std::endl;
		ShrubberyCreationForm b28("home");
		Bureaucrat vasia("Vasia", 100);

		std::cout << "Form " << b28.getName() << "has grade " << b28.qetGrade2sign() << std::endl;
		std::cout << "Bureaucrat " << vasia.getName() << "has grade " << vasia.getGrade() << std::endl;
		vasia.signAForm(b28);
		b28.execute(vasia);

		std::cout << std::endl << ITAL "CHECKING  ShrubberyCreationForm::execute(Bureaucrat const & executor) if SIGNED but BUREACRAT IS NOT HIGH EOUGH" RESET << std::endl;

		Bureaucrat fedia("Fedia", 149);
		std::cout << RED;
		b28.execute(fedia);
		std::cout << BLUE;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//	class PresidentialPardonForm check
// try catch construction in Bureaucrat::executeForm() is being used.
		Bureaucrat stjopa("Stjopa", 4);
		std::cout << std::endl;
		std::cout << RESET ULINE "class PresidentialPardonForm check" RESET << std::endl;
		std::cout << std::endl;
		PresidentialPardonForm pardonChik("Chikachillo");
		std::cout << pardonChik << std::endl;
		stjopa.executeForm(pardonChik);
		try
		{
			pardonChik.execute(stjopa);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			vasia.signAForm(pardonChik);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			stjopa.signAForm(pardonChik);
			vasia.executeForm(pardonChik);
			stjopa.executeForm(pardonChik);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	// RobotomyRequestForm tests
		std::cout << std::endl;
		std::cout << RESET BG_RED "class RobotomyRequestForm check" RESET << std::endl;
		std::cout << std::endl;
		RobotomyRequestForm iWantRobotomy("Chikachillo");
		std::cout << iWantRobotomy << std::endl;
		stjopa.executeForm(iWantRobotomy);
		try
		{
			iWantRobotomy.execute(stjopa);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			vasia.signAForm(iWantRobotomy);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			stjopa.signAForm(iWantRobotomy);
			vasia.executeForm(iWantRobotomy);
			stjopa.executeForm(iWantRobotomy);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
}