/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:00:06 by oruban            #+#    #+#             */
/*   Updated: 2024/07/01 13:02:01 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  roi 250601
Reference as alias for a variable
or
as constant dereferenced pointer */
#include <iostream>

int main()
{
	int numberOfBalls = 42;
	int z = 100;
	
	int *ballsPtr = &numberOfBalls;
	int &ballsRef = numberOfBalls;
	// int &ballsRef2; // Error: reference must be initialized

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;
	ballsRef = z;
	std::cout << numberOfBalls << std::endl;
}