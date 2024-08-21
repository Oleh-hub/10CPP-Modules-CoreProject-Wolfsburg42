
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
public:
	// Setters
	void setFirstName(std::string);
	void setLastName(std::string);
	void setNickname(std::string);
	void setPhoneNumber(std::string);
	void setSecret(std::string);

	// Getters
	const std::string &getFirstName(void);
	const std::string &getLastName(void);
	const std::string &getNickname(void);
	const std::string &getPhoneNumber(void);
	const std::string &getSecret(void);

private:
	// Member variables
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _secret;
};

#endif // CONTACT_HPP