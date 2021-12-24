/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:04:55 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 13:39:27 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
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
    // while (1)
    // {
        
    // }
    return 0;
}