/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:47:28 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 02:37:46 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.hpp"

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
	return (0);
}