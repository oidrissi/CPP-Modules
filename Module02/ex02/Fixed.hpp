/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:08:42 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/18 18:41:27 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const & src);
        Fixed(int const n);
        Fixed(float const n);
        ~Fixed(void);
        Fixed & operator = (Fixed const & rhs);
        bool operator > (Fixed const & rhs);
        bool operator < (Fixed const & rhs);
        bool operator >= (Fixed const & rhs);
        bool operator <= (Fixed const & rhs);
        bool operator == (Fixed const & rhs);
        bool operator != (Fixed const & rhs);
        Fixed operator + (Fixed const & rhs);
        Fixed operator - (Fixed const & rhs);
        Fixed operator * (Fixed const & rhs);
        Fixed operator/ (Fixed const & rhs);
        Fixed operator -- (void);
        Fixed operator ++ (void);
        Fixed operator -- (int j);
        Fixed operator ++ (int j);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed min(Fixed const & a, Fixed const & b);
        static Fixed max(Fixed const & a, Fixed const & b);
    private:
        int _value;
        static const int _fractionalBits = 8;
};

std::ostream & operator << (std::ostream & o, Fixed const & rhs);

#endif