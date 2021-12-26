/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:10:16 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:51:54 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(Cat const & Cat);
        Cat & operator = (Cat const & cat);
        void makeSound() const;
        std::string getType() const;
        const Brain & getBrain() const;
    protected:
        std::string _type;
    private:
        Brain *_brain;
};

#endif