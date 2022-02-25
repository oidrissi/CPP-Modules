/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:36:33 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 18:35:07 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>


template <typename T>
int		easyfind(T &container, int value)
{
    typename T::iterator it;
    // find is an STL algorithm that returns an iterator to the first element in the container that satisfies the predicate or condition.
    it = std::find(container.begin(), container.end(), value);
    if (it != container.end())
        return (*it);
    else
        throw std::exception();
}

#endif