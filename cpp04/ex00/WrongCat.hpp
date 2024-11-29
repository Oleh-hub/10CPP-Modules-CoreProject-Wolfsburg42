#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string newWrongCatName);
		WrongCat(const WrongCat &other); // copy constructor
		WrongCat &operator= (const WrongCat &other); // assignment operator
		~WrongCat();
		void makeSound() const;
};

#endif //WRONGCAT_HPP