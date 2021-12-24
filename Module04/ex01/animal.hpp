/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:07:21 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 12:27:43 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    public:
        Animal();
        Animal(Animal const & src);
        Animal & operator = (const Animal & rhs);
        virtual ~Animal();
        virtual std::string				getType() const;
        virtual void					makeSound() const;
    protected:
        std::string _type;
};

#endif