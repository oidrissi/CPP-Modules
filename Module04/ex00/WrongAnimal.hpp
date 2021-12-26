/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:44:10 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:12:11 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include "string"

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal & operator=(const WrongAnimal &rhs);
        virtual ~WrongAnimal();
        virtual void makeSound() const;
        virtual std::string getType() const;
    protected:
        std::string _type;
};

#endif