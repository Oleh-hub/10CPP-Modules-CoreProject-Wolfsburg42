// Абстрактный класс — это класс, который содержит хотя бы одну чисто виртуальную функцию " = 0;"
#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include "colors.hpp"
# include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(std::string newAAnimalName);
		AAnimal(const AAnimal &other); // copy constructor
		AAnimal &operator= (const AAnimal &other); // assignment operator
		// ~AAnimal();
		virtual ~AAnimal(); // garantees the derived class distructor being called when needed
		std::string const &getType() const;
		// void makeSound() const;
		virtual void makeSound() const = 0; //ABSTRACT class created. Это чисто виртульаная функция
};
#endif // AANIMAL_HPP