/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/12 16:15:12 by oidrissi         ###   ########.fr       */
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

void	print_table(std::string str)
{
	int l;
	
    l = str.size();
    if (l <= 10)
    {
        std::cout << std::setw(10);
        std::cout << str;
        std::cout << "|";
    }
    else
    {
        std::cout << std::setw(9);
        std::cout << str.substr(0, 9);
        std::cout << ".";
        std::cout << "|";
    }
}

void	first_row()
{
	print_table("INDEX");
	print_table("FIRST NAME");
	print_table("LAST NAME");
	print_table("NICKNAME");
}

void    Phonebook::search(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (this->contacts[i].getFirstName() == "")
            continue;
        print_table(std::to_string(i));
        print_table(this->contacts[i].getFirstName());
        print_table(this->contacts[i].getLastName());
        print_table(this->contacts[i].getNickname());
        std::cout << std::endl;
    }
}

void    Phonebook::display(int n)
{
    std::cout << "First Name :" << this->contacts[n].getFirstName() << std::endl;
    std::cout << "Last Name :" << this->contacts[n].getLastName() << std::endl;
    std::cout << "Nickname :" << this->contacts[n].getNickname() << std::endl;
    std::cout << "Phone number :" << this->contacts[n].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret :" << this->contacts[n].getDarkestSecret() << std::endl;
}

void    Phonebook::add_1(size_t index)
{
    Contacts c;
    std::string fname;
    std::cout << "First name: ";
    getline(std::cin, fname);
    c.setFirstName(fname);
    std::string lname;
    std::cout << "Last Name: ";
    getline(std::cin, lname);
    c.setLastName(lname);
    std::string nickname;
    std::cout << "Nickname: ";
    getline(std::cin, nickname);
    c.setNickname(nickname);
    std::string phone;
    std::cout << "Phone Number: ";
    getline(std::cin, phone);
    c.setPhoneNumber(phone);
    std::string dsecret;
    std::cout << "Darkest Secret: ";
    getline(std::cin, dsecret);
    c.setDarkestSecret(dsecret);
    if (index > 7)
        exit(0);
    else
        setContacts(c, index);
}

int    is_number(std::string str)
{
    for (unsigned int i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(str[i]))
            return 0;
    }
    return 1;
}

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    Phonebook pb;
    std::string command;
    int index = -1;
    int n;
    
    if (ac != 1)
    {
        std::cout << "Usage: ./Phonebook" << std::endl;
        return (0);
    }
    while (1)
    {
        std::cout << "Input A Command:";
        getline(std::cin ,command);
        if (command == "ADD")
        {
            index++;
            pb.add_1(index);
        }
        else if (command == "SEARCH")
        {
            first_row();
            std::cout << std::endl;
            pb.search(index + 1);
            std::cout << "Input an Index: ";
            std::string ok;
            getline(std::cin, ok);
            if (!is_number(ok) || ok.size() == 0)
                std::cout << "Invalid index" << std::endl;
            else
            {
                n = std::stol(ok);
                if (n > index)
                    std::cout << "Invalid index" << std::endl;
                else
                    pb.display(n);
            }
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