/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:46:53 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 20:15:32 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : _type("")
{
    std::cout << "Animal born" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal died" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "animal sound" << std::endl;
}

std::string    Animal::getType() const
{
    return (this->_type);
}