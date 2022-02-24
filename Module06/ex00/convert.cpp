/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:38:02 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 07:52:46 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.hpp"

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
	if (s[1] == '\0' && !isdigit(s[0]))
	{
		c = s[0];
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	}
	else if (isdigit(s[0]) && s[1] == '\0')
		std::cout << "char: Non displayable" << std::endl;
    else if (isdigit(s[0]) && s.find(".") != std::string::npos)
    {
        std::cout << "char: '*'" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}
void converter::convert_float(std::string s)
{
    //convert string to float
    if (!isdigit(s[0]) && s[0] != '-')
    {
        if (s == "nan" || s == "nanf")
            std::cout << "float: nanf" << std::endl;
        else if (s == "+inff" || s == "+inf")
            std::cout << "float: inff" << std::endl;
        else if (s == "-inf" || s == "-inff")
            std::cout << "float: -inff" << std::endl;
        else
            std::cout << "float: Non displayable" << std::endl;
    }
    else
    {
        float f = static_cast<float>(::atof(s.c_str()));
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }
}
void converter::convert_double(std::string s)
{
    if (!isdigit(s[0]) && s[0] != '-')
    {
        if (s == "nan" || s == "nanf")
            std::cout << "double: nan" << std::endl;
        else if (s == "+inff" || s == "+inf")
            std::cout << "double: inf" << std::endl;
        else if (s == "-inf" || s == "-inff")
            std::cout << "double: -inf" << std::endl;
        else
            std::cout << "double: Non displayable" << std::endl;
    }
    else
    {
        double d = static_cast<double>(::atof(s.c_str()));
        std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
    }
}
void converter::convert_int(std::string s)
{
    if (!isdigit(s[0]) && s[0] != '-')
        std::cout << "int: impossible" << std::endl;
    else
    {
        int i = static_cast<int>(::atoi(s.c_str()));
        std::cout << "int: " << i << std::endl;
    }
}