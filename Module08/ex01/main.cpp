/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:37:05 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/26 20:44:13 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    


    // -------------------------------------------------- //
    
    std::vector<int> a1;
    a1.push_back(6);
    a1.push_back(3);
    a1.push_back(17);
    a1.push_back(9);
    a1.push_back(11);
    sp.addNumbers(a1.begin(), a1.end());
    
    // -------------------------------------------------- //
    


    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}