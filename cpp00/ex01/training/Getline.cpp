/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Getline.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:00:14 by oruban            #+#    #+#             */
/*   Updated: 2024/07/03 18:21:40 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cin, std::cout, std::string
// #include <string> // 

int main()
{
	std::string input;
	
	while(true)
	{
		std::cout << "Plz, enter one of the three commands: \n" << \
			"1.\"ADD\", 2.\"SEARCH\" or 3.\"EXIT\"" << std::endl;
		std::getline(std::cin, input); // extract to string
		// std::cin >> input; // extract to string
		std::cout << "The entered string: '" << input << "'" << std::endl;
		if (input == "EXIT" || input == "3")
			break;
	}
	return 0;	
}