/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:04:55 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 23:21:36 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal *vv = new WrongAnimal();
    const WrongAnimal *v = new WrongCat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << v->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    v->makeSound();
    vv->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete v;
    delete vv;
    delete meta;
    return 0;
}