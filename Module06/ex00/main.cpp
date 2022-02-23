/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:47:28 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/23 23:47:12 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion_scalar_types.hpp"

void convert_int(std::string s)
{
	int i;
	std::istringstream(s) >> i;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./Convert <literal>" << std::endl;
		std::cout << "Use char, int, float or double" << std::endl;
		return (0);
	}
	converter c(av[1]);
	c.convert_char(av[1]);
	c.convert_int(av[1]);
	c.convert_float(av[1]);
	c.convert_double(av[1]);
	
	// std::string s = av[1];
	// if (isdigit(s[0]))
	// {
	// 	std::cout << "char: non displayable" << std::endl;
	// 	c.convert_float(s);
	// 	convert_double(s);
	// 	convert_int(s);
	// }
	// else
	// {
	// 	convert_char(s);
	// 	std::cout << "int: impossible" << std::endl;
	// 	std::cout << "float: " << av[1] << "f" << std::endl;
	// 	std::cout << "double: " << av[1] << std::endl;
	return (0);
}