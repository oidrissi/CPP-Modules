/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:39:51 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/26 23:03:55 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <limits>

Span::Span(unsigned int n)
{
    if (n <= 0)
        throw std::exception();
    _n = n;
    _tab = new int[n];
    for (unsigned int i = 0; i < n; i++)
        _tab[i] = 0;
}


Span::Span(): _n(0), _tab(NULL)
{
}

Span::Span(Span const &src)
{
    _n = src._n;
    _tab = new int[_n];
    for (unsigned int i = 0; i < _n; i++)
    {
        _tab[i] = src._tab[i];
        std::cout << _tab[i] << std::endl;
    }
}

Span::~Span()
{
    delete[] _tab;
}

Span &Span::operator=(Span const &rhs)
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

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    unsigned int i = 0;
    while (begin != end)
    {
        _tab[i] = *begin;
        begin++;
        i++;
    }
}

void Span::addNumber(int n)
{
    if (_n == 0)
        throw std::exception();
    for (unsigned int i = 0; i < _n; i++)
    {
        if (_tab[i] == n)
            throw std::exception();
    }
    for (unsigned int i = 0; i < _n; i++)
    {
        if (_tab[i] == 0)
        {
            _tab[i] = n;
            break;
        }
    }
}

int Span::shortestSpan()
{
    int diff;
    if (_n == 0)
        throw std::exception();
    diff = std::numeric_limits<int>::max();
    for (unsigned int i = 0; i < _n; i++)
    {
        for (unsigned int j = i + 1; j < _n; j++)
        {
            if (std::abs(_tab[i] - _tab[j]) < diff)
                diff = std::abs(_tab[i] - _tab[j]);
        }
    }
    return diff;
}

int Span::longestSpan()
{
    if (_n == 0)
        throw std::exception();
    int min = std::numeric_limits<int>::max();
    for (unsigned int i = 0; i < _n; i++)
    {
        if (_tab[i] < min)
            min = _tab[i];
    }
    int max = std::numeric_limits<int>::min();
    for (unsigned int i = 0; i < _n; i++)
    {
        if (_tab[i] > max)
            max = _tab[i];
    }
    return (max - min);
}