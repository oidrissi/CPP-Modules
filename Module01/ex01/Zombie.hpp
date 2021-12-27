/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:05:11 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/13 10:52:06 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        Zombie();
        void    setName(std::string name);
        ~Zombie();
        void announce();
    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif