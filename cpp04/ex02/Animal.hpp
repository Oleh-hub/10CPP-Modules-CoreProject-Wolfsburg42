#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "colors.hpp"
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
		virtual void makeSound() const = 0; //ABSTRACT class created
};
#endif // ANIMAL_HPP