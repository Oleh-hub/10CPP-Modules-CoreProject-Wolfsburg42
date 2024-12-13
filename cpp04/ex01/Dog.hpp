#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(std::string newDogName);
		Dog(const Dog &other); 				// copy constructor
		Dog &operator= (const Dog &other); 	// assignment operator
		~Dog();
		void makeSound() const;
		Brain *getBrain();
};

#endif //DOG_HPP