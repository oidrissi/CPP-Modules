/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:39:51 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 22:39:42 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
Span::Span(unsigned int n)
{
    if (n <= 0)
        throw std::exception();
    _n = n;
    _tab = new int[n];
}


Span::Span(): _n(0), _tab(NULL)
{
}

Span::Span(Span &src)
{
    _n = src._n;
    _tab = new int[_n];
    for (unsigned int i = 0; i < _n; i++)
        _tab[i] = src._tab[i];
}

Span::~Span()
{
    delete[] _tab;
}

Span &Span::operator=(Span &rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _tab = new int[_n];
        for (unsigned int i = 0; i < _n; i++)
            _tab[i] = rhs._tab[i];
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_n == 0)
        throw std::exception();
    for (unsigned int i = 0; i < _n; i++)
        if (_tab[i] == n)
            throw std::exception();
    for (unsigned int i = 0; i < _n; i++)
        if (_tab[i] == 0)
        {
            std::cout << "Element " << n << " added to span" << std::endl;
            _tab[i] = n;
            return;
        }
}
// int Span::shortestSpan()
// {
//     if (_n == 0)
//         throw std::exception();
//     int min = _tab[0];
//     for (unsigned int i = 0; i < _n; i++)
//         if (_tab[i] < min)
//             min = _tab[i];
//     return min;
// }
// int Span::longestSpan()
// {
//     if (_n == 0)
//         throw std::exception();
//     int max = _tab[0];
//     for (unsigned int i = 0; i < _n; i++)
//         if (_tab[i] > max)
//             max = _tab[i];
//     return max;
// }