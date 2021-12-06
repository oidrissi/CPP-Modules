/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:38 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/06 14:46:46 by oidrissi         ###   ########.fr       */
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
	int i;
	
	l = str.size();
	for (i = 0; i < l; i++)
	{
		if (i == 9)
		{
			std::cout << ".|";
			return ;
		}
		else
			std::cout << str[i];	
	}
	if (l < 10)
	{
		for (int j = i; j < 10; j++)
			std::cout << " ";
	}
	std::cout << "|";
}

void	print_in_table(std::string str)
{
	int l;
	int i;
	
	l = str.size();
	for (i = 0; i < l; i++)
	{
		if (i == 9)
		{
			std::cout << " |";
			return ;
		}
		else
			std::cout << str[i];	
	}
	if (l < 10)
	{
		for (int j = i; j < 10; j++)
			std::cout << " ";
	}
	std::cout << "|";
}

void	first_row()
{
	print_in_table("INDEX");
	print_in_table("FIRST NAME");
	print_in_table("LAST NAME");
	print_in_table("NICKNAME");
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

void    Phonebook::addContact(Contacts contacts)
{
    for (int i = 0; i < 8; i++)
    {
        if (this->contacts[i].getFirstName() == "")
        {
            this->contacts[i] = contacts;
            return ;
        }
    }
    this->contacts[0] = contacts;
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
    if (index >= 8)
        addContact(c);
    else
        setContacts(c, index);
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    Phonebook pb;
    int index = -1;
    int n;
    if (ac != 1)
    {
        std::cout << "Usage: ./Phonebook" << std::endl;
        return (0);
    }
    while (1)
    {
        std::string command;
        std::string v ("ADD");
        std::cout << "Input A Command:";
        getline(std::cin ,command);
        if (v.compare(command) == 0)
        {
            index++;
            pb.add_1(index);
        }
        else if (command == "SEARCH")
        {
            first_row();
            std::cout << "\n";
            pb.search(index + 1);
            std::cout << "Input an Index: ";
            std::string ok;
            getline(std::cin, ok);
            if (!is_number(ok))
                std::cout << "Invalid" << std::endl;
            else
            {
                n = std::stol(ok);
                if (n > index)
                {
                    std::cout << "Invalid, enter an index between 0 and " << index << std::endl;
                    // std::cin.clear();
                    // continue ;
                    // std::cin >> n;
                }
                else
                    pb.search(n + 1);
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