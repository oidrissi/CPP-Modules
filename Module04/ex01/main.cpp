/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:04:55 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:24:14 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    Animal* animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
        delete animals[i];

    Cat* test = new Cat;
	Cat* copy = new Cat(*test);

	// Display Ideas.
	std::cout << test->getBrain() << std::endl;
	delete test;
	sleep(1);

	std::cout << "Now that the original is deleted, let's see the ideas of the copy :" << std::endl;
	sleep(2);
	// Display Ideas.
	std::cout << copy->getBrain() << std::endl;
	delete copy;
    // while (1)
    // {
        
    // }
    return 0;
}