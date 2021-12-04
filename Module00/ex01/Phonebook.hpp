/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:26:27 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/05 00:02:38 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// #include "Contacts.hpp"
#include <string>
#include <iostream>

class Phonebook
{
    public:
        Phonebook();
        // ~Phonebook();
        void add(std::string name, std::string number);
        void search(std::string name);
        void search(int index);
        void remove(std::string name);
        void remove(int index);
        void print();
    private:
        // Contacts contacts[8];
        // Contacts *head;
        int size;
};

#endif