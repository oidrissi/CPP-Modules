/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:46:53 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:02:23 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : _type("")
{
    std::cout << "Default Animal Constructor Called" << std::endl;
}

Animal::Animal(Animal const & src) : _type(src._type)
{
    std::cout << "Copy Animal Constructor Called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

Animal & Animal::operator = (const Animal & rhs)
{
    std::cout << "Assignation Operator Called" << std::endl;
    if (this != &rhs)
        *this = rhs;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Animal: Standard Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}