/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:54:02 by oruban            #+#    #+#             */
/*   Updated: 2024/07/01 15:18:53 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdio.h>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const *str)
{
	 std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " and ponies";
}

void byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string str = "I like butterflies";

	std::cout << str << std::endl;
	
	byPtr(&str);
	byConstPtr(&str);
	str = "I like otters";
	std::cout << str << std::endl;
	byRef(str);
	byConstPtr(&str);
}