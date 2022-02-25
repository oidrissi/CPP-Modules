/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:36:33 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/25 02:37:02 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    public:
        Span();
        Span(unsigned int n);
        Span(Span & src);
        ~Span();
        Span &operator=(Span & rhs);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
    private:
        unsigned int _n;
        int *_tab;
};

#endif