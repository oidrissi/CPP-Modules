/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:49:59 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/15 20:54:08 by oidrissi         ###   ########.fr       */
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

int		map_word_to_int(std::string level)
{
	std::string log_level[4] = {"debug", "info", "warning", "error"};
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (level == log_level[i])
			return (i);
		else
			continue ;
	}
	return (-1);
}

void    Karen::complain(std::string level)
{
	int lvl = map_word_to_int(level);
	switch(lvl)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		case -1:
			std::cout << "Karen: I don't know what to say about this." << std::endl;
			break;
	}
}