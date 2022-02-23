/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:38:02 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/23 23:45:23 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion_scalar_types.hpp"

converter::converter()
{
}

converter::converter(std::string s)
{
    _s = s;
}

converter::~converter()
{
}

converter::converter(converter const &src)
{
    *this = src;
}

converter &converter::operator=(converter const &rhs)
{
    if (this != &rhs)
        _s = rhs._s;
    return (*this);
}

void converter::convert_char(std::string s)
{
    char c;
	if (s[1] == '\0')
	{
		c = s[0];
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}
void converter::convert_float(std::string s)
{
    float f;
    std::istringstream(s) >> f;
    std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
}
void converter::convert_double(std::string s)
{
    double d;
    std::istringstream(s) >> d;
    std::cout << "double: " << static_cast<double>(d) << std::endl;
}
void converter::convert_int(std::string s)
{
    int i;
    std::istringstream(s) >> i;
    std::cout << "int: " << static_cast<int>(i) << std::endl;
}