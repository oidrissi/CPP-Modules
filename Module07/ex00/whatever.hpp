/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:24:55 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 01:18:37 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T one, T two)
{
    T temp = one;
    one = two;
    two = temp;
}

template <typename X>
X min(X one, X two)
{
    if (one < two)
        return one;
    else
        return two;
}

template <typename D>
D max(D one, D two)
{
    if (one > two)
        return one;
    else
        return two;
}

int main( void );

#endif