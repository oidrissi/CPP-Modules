/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:37:08 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 16:04:52 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
        
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    guardGate();
        void    highFivesGuys();
        void    whoAmI();
};

#endif