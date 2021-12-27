/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:08:36 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/16 20:26:32 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " has been annihilated from the surface of the planet" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}   

void    HumanB::attack()
{
    if (!this->_weapon)
        std::cout << this->_name << ": I have no weapon" << std::endl;
    else
        std::cout << this->_name << " attacks with his: " << this->_weapon->getType() << std::endl;
}