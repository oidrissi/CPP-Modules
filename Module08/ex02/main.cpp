/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:37:05 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/26 23:00:03 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


// int main()
// {
//     MutantStack<int> mutstack;
//     mutstack.push(5);
//     mutstack.push(17);
//     std::cout << mutstack.top() << std::endl;
//     mutstack.pop();
//     std::cout << mutstack.size() << std::endl;
//     mutstack.push(3);
//     mutstack.push(5);
//     mutstack.push(737);
//     //[...]
//     mutstack.push(0);
//     MutantStack<int>::iterator it = mutstack.begin();
//     MutantStack<int>::iterator ite = mutstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mutstack);
//     return 0;
// }

int main()
{
    MutantStack<int> mutstack;
    mutstack.push(3);
	mutstack.push(7);
	mutstack.push(231);
	mutstack.push(77);
	mutstack.push(21);
	mutstack.push(42);
	mutstack.push(491);
	{
		MutantStack<int>::iterator it = mutstack.begin();
		MutantStack<int>::iterator ite = mutstack.end();
		std::cout << "Stack Content: From Bottom to Top " << std::endl;
		while(it != ite)
		{
			std::cout << *it;
			if (++it == ite)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}
    std::cout << "------------------------------------" << std::endl;
	{
		MutantStack<int> st = mutstack;
		std::cout << "New Stack: size: " << st.size() << std::endl << "MutantStack Size: " << mutstack.size() << std::endl;
		std::cout << "New Stack: top: " << st.top() << std::endl << "MutantStack Top elem: " << mutstack.top() << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cout << "Popping an element of New Stack 'st'" << std::endl;
		st.pop();
        std::cout << "------------------------------------" << std::endl;
		std::cout << "New Stack: size: " << st.size() << std::endl << "MutantStack Size: " << mutstack.size() << std::endl;
		std::cout << "New Stack: top: " << st.top() << std::endl << "MutantStack Top Elem: " << mutstack.top() << std::endl;
	}
}