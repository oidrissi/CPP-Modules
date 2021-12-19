/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:14:42 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 23:29:48 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++) 
        this->ideas[i] = "some idea I guess";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}