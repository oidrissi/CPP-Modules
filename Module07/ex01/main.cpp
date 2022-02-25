/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:52:41 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 01:45:00 by oidrissi         ###   ########.fr       */
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
    ::iter2(ptr, len, increment_string);
    std::cout << "Iterated Array = ";
    for (size_t i = 0; i < len; i++)
        std::cout << tab[i] << " ";
    return 0;
}

// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x )
// { std::cout << x << std::endl; return; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 };
//     Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0;
// }