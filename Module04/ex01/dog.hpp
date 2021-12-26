/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:10:21 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:51:44 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(Dog const & src);
        Dog & operator = (Dog const & rhs);
        void makeSound() const;
        std::string getType() const;
        const Brain & getBrain() const;
    protected:
        std::string _type;
    private:
        Brain *_brain;
};

#endif