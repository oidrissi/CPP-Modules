/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:48:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:46:30 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : _type("Cat")
{
    std::cout << "Default Cat Constructor called" << std::endl;
    this->_brain = new Brain();
    _brain->setBrain();
}

Cat::Cat(Cat const & cat) : _type(cat._type)
{
    std::cout << "Copy Constructor Cat called" << std::endl;
    this->_brain = new Brain(*cat._brain);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
    delete _brain;
}

Cat & Cat::operator = (Cat const & cat)
{
    if (this != & cat)
        *this = cat;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat: Meow" << std::endl;
}

std::string Cat::getType() const
{
    return Animal::getType();
}

const Brain & Cat::getBrain() const
{
    return (*_brain);
}