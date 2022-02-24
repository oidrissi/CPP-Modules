/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 02:39:11 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 03:28:19 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

/* Default constructor */

Data::Data()
{
    
}

/* Copy constructor */

Data::Data(Data const &src)
{
    *this = src;
}

/* Destructor */

Data::~Data()
{
    
}

/* Assignment operator overload */

Data &Data::operator=(Data const &rhs)
{
    if (this != &rhs)
        this->_s = rhs._s;
    return (*this);
}

/* Constructor with params */

Data::Data(std::string s)
{
    this->_s = s;
}

// take a pointer and convert it to the unsigned integer type uintptr_t

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}


int main()
{
    Data *ptr = new Data("Bonjour");
    uintptr_t raw = serialize(ptr);
    Data *ptr2 = deserialize(raw);
    std::cout << ptr2->_s << std::endl;
    return (0);
}