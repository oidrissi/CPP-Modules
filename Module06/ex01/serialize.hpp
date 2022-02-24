/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 02:39:19 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 02:47:39 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <ctype.h>
#include <stdlib.h>
#include <cmath>
#include <limits>

class Data
{
    public:
        Data();
        Data(std::string s);
        Data(Data const &src);
        ~Data();
        Data &operator=(Data const &rhs);
        std::string _s;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif