/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:04:55 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 13:40:30 by oidrissi         ###   ########.fr       */
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
    // const Animal *i = new Animal(); // Should not compile
    const Animal *j = new Dog();
    const Animal *k = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    j->makeSound();
    k->makeSound();
    // i->makeSound(); // should not compile
    delete j;
    delete k;
    // delete i; // should not compile
    return (0);
}