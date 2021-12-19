/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:52:30 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 20:16:02 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : _type("Dog")
{
    std::cout << "Dog born" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog died" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

std::string Dog::getType() const
{
    return (this->_type);
}