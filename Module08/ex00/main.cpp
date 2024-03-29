/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:37:05 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/26 23:03:16 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// an iterator is an object that can be used to access/traverse the elements of a container

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    std::vector<int> b(a, a + 5);
    std::cout << "b: ";
    for (std::vector<int>::iterator it = b.begin(); it != b.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    try
    {
        std::cout << "easyfind(b, 3): " << easyfind(b, 3) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "easyfind(b, 6): " << easyfind(b, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}