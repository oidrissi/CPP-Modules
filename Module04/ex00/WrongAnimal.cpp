/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:45:13 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/23 16:08:14 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
    std::cout << "Wrong Animal Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal Destructor Called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal sound" << std::endl;
}

std::string   WrongAnimal::getType() const
{
    return (this->_type);
}