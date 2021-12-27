/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:37:35 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/22 12:42:41 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name)
{
    std::cout << "Constructor DiamondTrap" << this->_name <<  " created" << std::endl;
    this->_name = _name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Constructed DiamondTrap Destroyed" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const & rhs)
{
    std::cout << "Overloading a DiamondTrap, please wait" << std::endl;
    if (this != &rhs)
        this->_name = rhs._name;
    return (*this);
}

void    DiamondTrap::attack(std::string const & target)
{
    this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Diamond Name : " << this->_name << std::endl;
    std::cout << "ClapTrap Name : " << ClapTrap::_name << std::endl;
}

void    DiamondTrap::highFivesGuys()
{
    this->FragTrap::highFivesGuys();
}