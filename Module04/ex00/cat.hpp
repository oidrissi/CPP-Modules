/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:10:16 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/23 15:51:17 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(Cat const & Cat);
        Cat & operator = (Cat const & cat);
        void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif