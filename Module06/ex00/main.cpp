/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:47:28 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/22 16:17:17 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion_scalar_types.hpp"

// std::string s = "10";
// int i;
//  std::istringstream(s) >> i;

//Write a program that takes as parameter a string representation of a C++ literal in its most common form

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./conversion_scalar_types <literal>" << std::endl;
		std::cout << "Use char, int, float or double" << std::endl;
		return (0);
	}
	std::string s = av[1];
	// detect the type of the literal passed in s
	if (isalpha(s[0]))
	{
		std::cout << "char: " << (char)s[0] << std::endl;
	}
	else
	{
		std::cout << "char: Non Displayable Character" << std::endl;
		std::cout << "float: " << std::stof(s) << "f" << std::endl;
		std::cout << "int: " << std::stoi(s) << std::endl;
		std::cout << "double: " << std::stod(s) << std::endl;
	}
	
	return (0);
}