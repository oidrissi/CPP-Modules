/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_scalar_types.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:47:31 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/23 23:44:13 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_SCALAR_TYPES_HPP
# define CONVERSION_SCALAR_TYPES_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
#include <stdlib.h>
#include "convert.cpp"

class converter
{
    public:
        converter();
        converter(std::string s);
        converter(converter const &src);
        ~converter();
        converter &operator=(converter const &rhs);
        void convert_char(std::string s);
        void convert_float(std::string s);
        void convert_double(std::string s);
        void convert_int(std::string s);
    private:
        std::string _s;
};

int main(int ac, char **av);

#endif