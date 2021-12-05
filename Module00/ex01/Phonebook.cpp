/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/05 17:22:01 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    
}

Phonebook::~Phonebook()
{
    
}

void    Phonebook::setContacts(Contacts contacts, size_t index)
{
    this->contacts[index] = contacts;
}

void    Phonebook::search(std::string name)
{
    for (size_t i = 0; i < 8; i++)
    {
        if (contacts[i].getFirstName() == name)
        {
            std::cout << contacts[i].getFirstName() << ": " << contacts[i].getPhoneNumber() << std::endl;
        }
    }
}

void    Phonebook::add_1(size_t index)
{
    Contacts c;
    std::string fname;
    std::cout << "Enter First name: ";
    std::cin >> fname;
    c.setFirstName(fname);
    std::string lname;
    std::cout << "Enter Last Name: ";
    std::cin >> lname;
    c.setLastName(lname);
    std::string nickname;
    std::cout << "Enter Nickname: ";
    std::cin >> nickname;
    c.setNickname(nickname);
    std::string phone;
    std::cout << "Enter Phone Number: ";
    std::cin >> phone;
    c.setPhoneNumber(phone);
    std::string dsecret;
    std::cout << "Enter Darkest Secret: ";
    std::cin >> dsecret;
    c.setDarkestSecret(dsecret);
    setContacts(c, index);
    // contacts.getFirstName();
    // std::cout << "Enter last name: ";
    // std::cin >> contacts.this->lastName;
    // std::cout << "Enter nickname: ";
    // std::cin >> contacts.this->nickname;
    // std::cout << "Enter Phone Number: ";
    // std::cin >> contacts.this->phoneNumber;
    // std::cout << "Enter Darkest Secret: ";
    // std::cin >> contacts.this->darkestSecret;
}

// Contacts    getContacts(size_t index)
// {
//     return (p)
// }

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    Phonebook pb;
    int index = -1;
    if (ac != 1)
    {
        std::cout << "Usage: ./Phonebook" << std::endl;
        return (0);
    }
    while (1)
    {

        std::string command;
        std::cout << "Input A Command:";
        std::cin >> command;
        if (command == "ADD")
        {
            while (index < 0)
            {
                index++;
                pb.add_1(index);
            }
        }
        else if (command == "SEARCH")
        {
            std::string name;
            std::cout << "Enter name: ";
            std::cin >> name;
            pb.search(name);
        }
        else if (command == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Unknown Command" << std::endl;
        }
    }
    return 0;
}