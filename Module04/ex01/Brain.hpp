/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:14:45 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/24 15:00:12 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain & Brain);
        virtual ~Brain();
        Brain & operator = (const Brain &other);
        void setBrain();
        virtual std::string getBrain();
};

std::ostream & operator << (std::ostream &out, Brain & brain);

#endif