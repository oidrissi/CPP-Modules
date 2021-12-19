/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:48:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 20:19:24 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : _type("Cat")
{
    std::cout << "Cat born" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat died" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const
{
    return (this->_type);
}