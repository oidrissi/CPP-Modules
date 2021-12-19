/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:48:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 23:54:23 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : _type("Cat")
{
    std::cout << "Cat born" << std::endl;
}

Cat::Cat(const Cat &src)
{
    
}

Cat &Cat::operator = (const Cat &src)
{
    this->_brain = new Brain;
    for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = src._brain->ideas[i];
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat died" << std::endl;
    delete this->_brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const
{
    return (this->_type);
}