/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:41:02 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/24 22:34:01 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>
#include <string>

template <typename A, std::size_t L>
class Array{

 public:
    Array(void)
    {
        new A[L];
    }
    Array(unsigned int n)
    {
        new A[L];
        
    }
    Array(Array const &src)
    {
        A[] = {};
        for (size_t i = 0; i < L; i++)
            A[i] = src.A[i];
    }
    ~Array(void)
    {
        delete [] A;
    }
    std::size_t getSize() const
    {
        return L;
    }

private:
    A elem[L];
};


int main( void );

#endif