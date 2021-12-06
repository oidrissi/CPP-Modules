/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:27 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/06 14:48:09 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <limits>
#include "Contacts.hpp"

class Phonebook
{
    public:
		Phonebook();
		~Phonebook();
		void setContacts(Contacts contacts, size_t index);
        void add_1(size_t index);
        void addContact(Contacts contacts);
        void search(int n);
        void print();
    private:
        Contacts contacts[8];
};

#endif