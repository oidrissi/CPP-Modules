/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:15:13 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 16:50:37 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap Drap("Drap");
    Drap.attack("Cesar");
    Drap.FragTrap::highFivesGuys();
    Drap.whoAmI();
    return 0;
}