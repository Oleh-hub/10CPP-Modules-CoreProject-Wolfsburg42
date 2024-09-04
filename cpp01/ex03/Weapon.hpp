#ifndef WEAPON_HPP
# define WEAPON_HPP

# define DEF_COLOR "\033[0;39m"
# define GRAY "\033[0;90m"
# define RED "\033[0;91m"
# define GREEN "\033[0;92m"
# define YELLOW "\033[0;93m"
# define BLUE "\033[0;94m"
# define MAGENTA "\033[0;95m"
# define CYAN "\033[0;96m"
# define WHITE "\033[0;97m"

#include <iostream> // std::string

class Weapon {
private:
	std::string _type;
public:
	Weapon(const std::string &type);
	~Weapon();

	const std::string &getType(void) const;
	void setType(const std::string &newType);
};

#endif // WEAPON_HPP