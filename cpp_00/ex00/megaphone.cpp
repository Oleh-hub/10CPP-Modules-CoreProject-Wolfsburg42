/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:25:13 by oruban            #+#    #+#             */
/*   Updated: 2024/08/20 16:17:07 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Just to make sure that everybody is awake, write a program that behaves as 
// follows:
// $>./megaphone "shhhhh... I think the students are asleep..."
// SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
// $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
// DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
// $>./megaphone
// * LOUD AND UNBEARABLE FEEDBACK NOISE *
// $>

#include <iostream> // For std::cout, std::endl
#include <cctype>	// For std::toupper()
//  the next header is inclusion may be ommitted because the iostream headeer as a header of C++ standardd library includes it indirectly
#include <string>	// For std::string, str.begin(), str.end().

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	// ========== mixed C/C++ approach ============== 
	// for (int i = 1; i < argc; i++)
	// {
	// 	for (int j = 0; argv[i][j]; j++)
	// 		std::cout << (char) toupper(argv[i][j]);
	// 	std::cout << ' ';
	// }

	// ========== pure C++ approach ==============
	// 2 implement the string approuch I got by google "iterate over c++ string" an ref on stockoverflow "How would I do a for loop on every character in string in C++?"
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i]; // demanded work with string
		for(std::string::iterator it = str.begin(); it != str.end(); ++it) 
			std::cout << (char) std::toupper(*it); // demanded work with upper
		std::cout << ' ';
	}
	std::cout << std::endl; // std::cout << '\n';
	return (0);
}
