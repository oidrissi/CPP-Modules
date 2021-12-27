/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:27 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/12 16:06:13 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>
#include "Contacts.hpp"

class Phonebook
{
    public:
		Phonebook();
		~Phonebook();
		void setContacts(Contacts contacts, size_t index);
        void add_1(size_t index);
        void search(int n);
        void display(int n);
        void print();
    private:
        Contacts contacts[8];
};

#endif