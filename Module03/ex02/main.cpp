/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:15:13 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 14:59:50 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("frag");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.attack("Cesar");
    frag.highFivesGuys();
    return 0;
}