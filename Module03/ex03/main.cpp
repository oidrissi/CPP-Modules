/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:15:13 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/22 12:40:44 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap Drap("Drap");
    Drap.attack("Cesar");
    Drap.highFivesGuys();
    Drap.whoAmI();
    return 0;
}