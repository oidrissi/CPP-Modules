/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:15:00 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/22 11:39:38 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : _name(_name)
{
    std::cout << "Constructor ClapTrap " << _name << " is born !" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy Constructor ClapTrap " << src._name << " is born !" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Constructor ClapTrap " << _name << " is dead !" << std::endl;
}

ClapTrap & ClapTrap::operator = (ClapTrap const & rhs)
{
    std::cout << "Assignation Operator called" << std::endl;
    if (this != &rhs)
    {
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
        this->_name = rhs._name;
    }
    return (*this);
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " damage points !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints - amount < 0)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount > 10)
		_hitPoints = 10;
	else
		_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " has healed " << amount << " hit points !" << std::endl;
}