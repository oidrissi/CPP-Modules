/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 05:37:06 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/11 09:57:47 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < ac; i++)
        {
            std::string str = av[i];
            for (size_t j = 0; j < str.length(); j++)
            {
                if (str[j] >= 'a' && str[j] <= 'z')
                    str[j] -= 32;
            }
            std::cout << str;
        }
        std::cout << std::endl;
    }
    return 0;
}