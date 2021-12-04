/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/05 00:12:07 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    // Phonebook pb;
    if (ac != 1)
    {
        std::cout << "Usage: ./Phonebook" << std::endl;
        return (0);
    }
    while (1)
    {
        std::string command;
        std::cout << "Input A Command:";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            std::string firstName;
            std::cout << "firstName:";
            std::getline(std::cin, command);
            std::string lastName;
            std::cout << "lastName:";
            std::getline(std::cin, command);
            std::string nickname;
            std::cout << "nickname:";
            std::getline(std::cin, command);
            std::string phoneNumber;
            std::cout << "phoneNumber:";
            std::getline(std::cin, command);
            std::string darkestSecret;
            std::cout << "darkestSecret:";
            std::getline(std::cin, command);
        }
        else
            break ;
    }
    return 0;
}