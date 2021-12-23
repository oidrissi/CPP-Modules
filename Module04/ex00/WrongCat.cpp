/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:39:00 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/23 16:11:29 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat")
{
    std::cout << "Wrong Cat Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat Destructor Called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "I'm a Fake Cat" << std::endl;
}

std::string   WrongCat::getType() const
{
    return (this->_type);
}

