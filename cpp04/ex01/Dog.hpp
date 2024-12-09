#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string newDogName);
		Dog(const Dog &other); // copy constructor
		Dog &operator= (const Dog &other); // assignment operator
		~Dog();
		void makeSound() const;
};

#endif //DOG_HPP