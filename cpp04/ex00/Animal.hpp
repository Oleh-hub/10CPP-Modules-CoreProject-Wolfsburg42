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
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string newAnimalName);
		Animal(const Animal &other); // copy constructor
		Animal &operator= (const Animal &other); // assignment operator
		// ~Animal();
		virtual ~Animal(); // garantees the derived class distructor being called when needed
		std::string const &getType() const;
		// void makeSound() const;
		virtual void makeSound() const; //garantees the functionfo derived class being called when needed
};
#endif // ANIMAL_HPP