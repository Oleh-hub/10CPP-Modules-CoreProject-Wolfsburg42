#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];
		
	public:
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain();
		std::string const &getIdea(size_t index) const;

};

#endif //BRAIN_HPP