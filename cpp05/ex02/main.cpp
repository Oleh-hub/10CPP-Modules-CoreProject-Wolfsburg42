#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "PrintHeader.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iomanip>
#include <iostream>

/* void gradeTests(const std::string test_name, AForm &form, const Bureaucrat &low_grade, const Bureaucrat &high_grade) {
	PrintHeader::printH1(test_name, BLUE);
	std::cout << std::endl;
	std::cout << BOLD "Execute unsigned form with: " << RED "NOT ENOUGH GRADE" RESET << std::endl;
	low_grade.executeForm(form);
	std::cout << std::endl;

	std::cout << BOLD "Sign unsigned form with: " << RED "NOT ENOUGH GRADE" RESET << std::endl;
	low_grade.signForm(form);
	std::cout << std::endl;

	std::cout << BOLD "Sign unsigned form with: " << GREEN "GRADE OK" RESET << std::endl;
	high_grade.signForm(form);
	std::cout << std::endl;

	std::cout << BOLD "Execute signed form with: " << RED "NOT ENOUGH GRADE" RESET << std::endl;
	low_grade.executeForm(form);
	std::cout << std::endl;

	std::cout << BOLD "Execute signed form with: " << GREEN "GRADE OK" RESET << std::endl;
	high_grade.executeForm(form);
	std::cout << std::endl;
}

int main(void) {
	PrintHeader::printH1("Create bureaucrats with different grades", BLUE);
	Bureaucrat lowlyBureaucrat("Lowly Larry", 146);
	Bureaucrat highBureaucrat("High Harry", 3);

	std::cout << std::endl
			  << "Bureaucrats created:\n"
				 "\t"
			  << lowlyBureaucrat << "\n"
									"\t"
			  << highBureaucrat << std::endl
			  << std::endl;

	ShrubberyCreationForm shrubForm("Forest");
	RobotomyRequestForm roboForm("Robo");
	PresidentialPardonForm presForm("Bob");

	PrintHeader::printH1("Create different forms", BLUE);
	std::cout << std::endl
			  << shrubForm << "\n"
			  << roboForm << "\n"
			  << presForm << "\n";

	gradeTests("ShrubberyCreationForm", shrubForm, lowlyBureaucrat, highBureaucrat);
	gradeTests("RobotomyRequestForm", roboForm, lowlyBureaucrat, highBureaucrat);
	gradeTests("PresidentialPardonForm", presForm, lowlyBureaucrat, highBureaucrat);

	std::cout << std::endl;
	return (0);
} */

int main()
{
	Bureaucrat vasia("Vasia", 100);
	std::cout << vasia.getName () << " " << vasia.getGrade() << std::endl;

	ShrubberyCreationForm b28("home");
	AForm *b28A = &b28;
	std::cout << b28A->getName() << " " << b28A->getSigned() << " " << b28A << " " << &b28 << std::endl;
	std::cout << RED;
	b28.jklm();
	std::cout << RESET;
	b28A->jklm();
	ShrubberyCreationForm copy("job");
	std::cout << copy.getName() << " the form " << copy.getName() << " for target: " << copy.getTargetName() << std::endl;
	std::cout << GREEN;
	copy = b28;
	std::cout << copy.getName() << " this form is for target: " << copy.getTargetName() << std::endl;
	std::cout << RESET;
	ShrubberyCreationForm z(b28);
	std::cout << BLUE;
}