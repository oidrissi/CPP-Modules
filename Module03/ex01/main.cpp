/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:15:13 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/22 11:52:13 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("Scav");
    ScavTrap rm = scav;
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.attack("Cesar");
    scav.guardGate();
    return 0;
}