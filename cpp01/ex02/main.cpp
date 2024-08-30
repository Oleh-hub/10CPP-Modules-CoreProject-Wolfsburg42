/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 12:41:45 by oruban            #+#    #+#             */
/*   Updated: 2024/08/30 12:42:38 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Shows that all three variables point to the same memory address
#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable str:	" << &str << std::endl;
	std::cout << "The value pointed to by stringPTR:		" << stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:		" << &stringREF << std::endl;
}
