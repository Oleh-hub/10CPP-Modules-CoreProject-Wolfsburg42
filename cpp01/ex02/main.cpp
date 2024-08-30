/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 12:41:45 by oruban            #+#    #+#             */
/*   Updated: 2024/08/30 13:01:13 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Shows that all three variables point to the same memory address
#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The addresses of: str, stringPTR and stringREF." << std::endl;
	std::cout << "The memory address of the string variable str:	" << &str << std::endl;
	std::cout << "The memory address held by stringPTR:		" << stringPTR << std::endl;
	std::cout << "• The memory address held by stringREF:		" << &stringREF << std::endl;
	std::cout << std::endl << "The values of: str, stringPTR and stringREF." << std::endl;
	std::cout << "The value of the string variable str:	" << str << std::endl;
	std::cout << "The value pointed to by stringPTR:	" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:	" << stringREF << std::endl;
}
