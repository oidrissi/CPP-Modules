/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:52:30 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:19:56 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : _type("Dog")
{
    std::cout << "Default " << _type << " Constructor Called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(Dog const & src) : _type(src._type)
{
    *this = src;
    this->_brain = new Brain();
}

Dog::~Dog()
{
    std::cout << _type << " Destructor Called" << std::endl;
    delete this->_brain;
}

Dog & Dog::operator = (Dog const & rhs)
{
    std::cout << "Assignation Operator Called" << std::endl;
    if (this != &rhs)
        *this = rhs;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog: Woof" << std::endl;
}

std::string Dog::getType() const
{
    return Animal::getType();
}