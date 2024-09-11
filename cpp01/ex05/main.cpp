// for as an alternative to 
// {
// harl.complain("DEBUG");
// harl.complain("INFO");
// harl.complain("WARNING");
// harl.complain("ERROR");
//harl.complain("RUBBISH");
// }

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "RUBBISH"}; // RUBBISH added acc. to subj. "Create and turn in tests"
	for (int i = 0; i < 5; i++)
		harl.complain(levels[i]);
	return 0;
}
