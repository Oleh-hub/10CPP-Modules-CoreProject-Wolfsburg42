#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define RESET		"\033[0;39m"
# define GRAY 		"\033[0;90m"
# define RED 		"\033[0;91m"
# define GREEN 		"\033[0;92m"
# define YELLOW 	"\033[0;93m"
# define BLUE 		"\033[0;94m"
# define MAGENTA 	"\033[0;95m"
# define CYAN 		"\033[0;96m"
# define WHITE 		"\033[0;97m"
# include <iostream>

class Animal
{
	private:
		std::string _type;
	public:
		Animal();
		Animal(std::string newAnimalName);
		Animal(const Animal &other); // copy constructor
		// Animal &operator= (const Animal &other); // assignment operator
		~Animal();
		// void makeSound() const;
};
#endif // ANIMAL_HPP