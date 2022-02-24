/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 03:32:42 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 03:38:52 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
#include "Base.hpp"

class B: public Base
{
    public:
        B();
        B(B const &src);
        ~B();
        B &operator=(B const &rhs);
};

#endif