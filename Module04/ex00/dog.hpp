/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:10:21 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/23 16:04:46 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(Dog const & src);
        Dog & operator = (Dog const & rhs);
        void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif