# include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << std::endl << "Harl begins complaining!" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << std::endl << "Harl leaves!" << std::endl;
}

void Harl::debug( void )
{
	std::cout << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; // pointer to the array of the class member functions
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i]) // acc. 2 subj. this is not " a forest of if/else if/else". if used only once.
		{
			(this->*f[i])();
			break;
		}
	}
}