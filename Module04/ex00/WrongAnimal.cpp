/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:45:13 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:08:51 by oidrissi         ###   ########.fr       */
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
    std::cout << "Wrong Animal Sound: WaZaaaaaa" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    this->_type = rhs._type;
    return *this;
}

std::string   WrongAnimal::getType() const
{
    return (this->_type);
}