/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:52:41 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 01:11:00 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
    Array<int> a(5);
    Array<int> b(a);
    Array<int> c;
    c = a;
    std::cout << a[0] << std::endl;
    a[0] = 42;
    // We modify the value of a[0] and see if it changes the deep copied array value
    std::cout << a[0] << std::endl;
    std::cout << b[0] << std::endl;
    std::cout << c[0] << std::endl;
    return 0;
}