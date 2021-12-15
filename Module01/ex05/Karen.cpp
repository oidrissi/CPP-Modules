/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:49:59 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/15 14:50:26 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(std::string name)
{
    std::cout << "Karen: " << name << " is born !" << std::endl;
}

Karen::~Karen()
{
    std::cout << "Karen: Oh my God, I'm dying..." << std::endl;
}

void    Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void    Karen::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        switch(i)
        {
            case 0:
                if (level == "debug")
                {
                    this->debug();
                    this->info();
                    this->warning();
                    this->error();
                }
                break;
            case 1:
                if (level == "info")
                {
                    this->info();
                    this->warning();
                    this->error();
                }
                break;
            case 2:
                if (level == "warning")
                {
                    this->warning();
                    this->error();
                }
                break;
            case 3:
                if (level == "error")
                    this->error();
                break;
        }
    }
}