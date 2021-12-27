/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:08:35 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/19 14:13:29 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
    
}

Fixed::Fixed(int const n)
{
    this->_value = n << this->_fractionalBits;
}

Fixed::Fixed(float const n)
{
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}

Fixed Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed F(*this);
    this->_value++;
    return (F);
}

Fixed Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed F(*this);
    this->_value--;
    return (F);
}

bool    Fixed::operator> (const Fixed& Rhs)
{
    return (this->toFloat() > Rhs.toFloat());
}

bool    Fixed::operator< (const Fixed& Rhs)
{
    return (this->toFloat() < Rhs.toFloat());
}

bool    Fixed::operator>= (const Fixed& Rhs)
{
    return (this->toFloat() >= Rhs.toFloat());
}

bool    Fixed::operator<= (const Fixed& Rhs)
{
    return (this->toFloat() <= Rhs.toFloat());
}

bool    Fixed::operator== (const Fixed& Rhs)
{
    return (this->toFloat() == Rhs.toFloat());
}

bool    Fixed::operator!= (const Fixed& Rhs)
{
    return (this->toFloat() != Rhs.toFloat());
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed   Fixed::operator+ (Fixed const & rhs)
{
    float tmp = this->toFloat() + rhs.toFloat();
    Fixed F(tmp);
    return (F);
}

Fixed   Fixed::operator- (Fixed const & rhs)
{
    float tmp = this->toFloat() - rhs.toFloat();
    Fixed F(tmp);
    return (F);
}

Fixed   Fixed::operator* (Fixed const & rhs)
{
    float tmp = this->toFloat() * rhs.toFloat();
    Fixed F(tmp);
    return (F);
}

Fixed   Fixed::operator/ (Fixed const & rhs)
{
    float tmp = this->toFloat() / rhs.toFloat();
    Fixed F(tmp);
    return (F);
}

Fixed Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    return (b);
}

Fixed Fixed::max(Fixed const & a, Fixed const & b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    return (b);
}
