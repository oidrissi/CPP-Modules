/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:38:58 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 14:10:15 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        WrongCat & operator=(const WrongCat &rhs);
        void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif