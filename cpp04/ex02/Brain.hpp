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
		void setIdea(const std::string &idea2get, size_t index);
};

#endif //BRAIN_HPP