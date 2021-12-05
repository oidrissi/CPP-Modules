/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:36:20 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/05 16:20:00 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{
    
}

Contacts::~Contacts()
{
    
}

void    Contacts::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void    Contacts::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void    Contacts::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void    Contacts::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void    Contacts::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}

std::string Contacts::getFirstName(void) const
{
    return (this->_firstName);
}

std::string Contacts::getLastName(void) const
{
    return (this->_lastName);
}

std::string Contacts::getNickname(void) const
{
    return (this->_nickname);
}

std::string Contacts::getPhoneNumber(void) const
{
    return (this->_phoneNumber);
}
std::string Contacts::getDarkestSecret(void) const
{
    return (this->_darkestSecret);
}
