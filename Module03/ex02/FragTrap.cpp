/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:20:02 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 15:21:52 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap " << this->_name << " created !" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap()
{
    std::cout << "Constructor FragTrap Called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Constructor FragTrap Destroyed" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " gives a high five !" << std::endl;
}