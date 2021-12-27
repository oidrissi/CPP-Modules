/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:32:51 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/22 11:59:07 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor ScavTrap " << this->_name << " created !" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap()
{
    std::cout << "Constructor ScavTrap Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Constructor ScavTrap Destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator = (ScavTrap const & rhs)
{
    std::cout << "Overloading a ScavTrap, please wait" << std::endl;
    (void)rhs;
    return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " has entered Gate Keeper Mode !" << std::endl;
}