#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(std::string newCatName);
		Cat(const Cat &other); 				// copy constructor
		Cat &operator= (const Cat &other); 	// assignment operator
		~Cat();
		void makeSound() const;
		Brain *getBrain() const;
};

#endif //CAT_HPP