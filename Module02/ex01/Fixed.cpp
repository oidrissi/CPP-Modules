/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:08:35 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 23:09:16 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_fractionalBits;
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(n * (1 << this->_fractionalBits));
}

float Fixed::toFloat( void ) const
{
    return (float)this->_value / (1 << this->_fractionalBits);
}

int Fixed::toInt( void ) const
{
    return this->_value >> this->_fractionalBits;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator = (Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}


std::ostream & operator << (std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}