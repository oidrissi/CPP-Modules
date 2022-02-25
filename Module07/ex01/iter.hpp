/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:41:02 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 01:44:24 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *tab, size_t size, void (*f)(T const  &e))
{
    for (size_t i = 0; i < size; i++)
        f(tab[i]);
}

template <typename T>
void iter2(T *tab, size_t size, void (*f)(T  &e))
{
    for (size_t i = 0; i < size; i++)
        f(tab[i]);
}

int main( void );

#endif