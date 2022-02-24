/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 03:32:01 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 03:34:18 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
#include "Base.hpp"

class A: public Base
{
    public:
        A();
        A(A const &src);
        ~A();
        A &operator=(A const &rhs);
};

#endif