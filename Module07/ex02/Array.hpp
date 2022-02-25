/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:41:02 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 01:43:02 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>
#include <string>

template <class A>
class Array
{
    public:
        Array(void)
        {
            this->_size = 0;
            this->_array = NULL;
        }
        Array(unsigned int n)
        {
            this->_size = n;
            this->_array = new A[n];
        }
        Array(Array & src)
        {
            this->_size = src.size();
            this->_array = new A[this->_size];
            for (unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = src[i];
        }
        ~Array(void)
        {
            delete [] this->_array;
        }

        Array &	operator=(Array & rhs)
        {
            if (this != &rhs)
            {
                delete [] this->_array;
                this->_size = rhs.size();
                this->_array = new A[this->_size];
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_array[i] = rhs[i];
            }
            return *this;
        }
        A &		operator[](unsigned int index)
        {
            if (index >= this->_size)
                throw std::exception();
            return this->_array[index];
        }
        A const &	operator[](unsigned int index) const
        {
            if (index >= this->_size)
                throw std::exception();
            return this->_array[index];
        }
        unsigned int	size(void) const
        {
            return this->_size;
        }

    private:
        A *		        _array;
        unsigned int	_size;
};

#endif