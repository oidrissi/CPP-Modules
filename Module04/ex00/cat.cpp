/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:48:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/23 16:11:01 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : _type("Cat")
{
    std::cout << "Default Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const & cat) : _type("")
{
    std::cout << "Copy Constructor Cat called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat & Cat::operator = (Cat const & cat)
{
    if (this != & cat)
        *this = cat;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const
{
    return (this->_type);
}