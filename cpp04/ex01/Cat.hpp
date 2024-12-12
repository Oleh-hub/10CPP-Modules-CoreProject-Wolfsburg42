#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal//, public Brain
{
	private:
		Brain *ideas_p;
	public:
		Cat();
		Cat(std::string newCatName);
		Cat(const Cat &other); // copy constructor
		Cat &operator= (const Cat &other); // assignment operator
		~Cat();
		void makeSound() const;
};

#endif //CAT_HPP