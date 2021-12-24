/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:14:42 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 15:00:32 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Constructor Brain Called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy Constructor Brain Called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain & Brain::operator = (const Brain &other)
{
    if (this != &other)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return (*this);
}

std::ostream &operator << (std::ostream &out, Brain & brain)
{
	out << "[ ";
	out << brain.getBrain();
	out << " ]" << std::endl;
	return out;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setBrain()
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Idea " + std::to_string(i);
}

std::string Brain::getBrain()
{
    std::string brain;
    for (int i = 0; i < 100; i++)
        brain += ideas[i] + "\n";
    return (brain);
}