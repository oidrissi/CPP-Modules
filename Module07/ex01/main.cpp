/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:52:41 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 22:22:52 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment_string(std::string &str)
{
    for (size_t i = 0; i < str.size(); i++)
        str[i]++;
}

void increment( int &i )
{
    i++;
}

int main( void )
{
    // int tab[5] = {'a', 'b', 'c', 'd', 'e'};
    // size_t len = sizeof(tab)/sizeof(*tab);
    // int *ptr = tab;
    // ::iter(ptr, len, increment);
    std::string tab[5] = {"gdkkn", "vnqkc", "cdrsqtbshnm", "bnlhmf", "rnnm"};
    std::string *ptr = tab;
    size_t len = sizeof(tab)/sizeof(*tab);
    ::iter(ptr, len, increment_string);
    std::cout << "Iterated Array = ";
    for (size_t i = 0; i < len; i++)
        std::cout << tab[i] << " ";
    return 0;
}