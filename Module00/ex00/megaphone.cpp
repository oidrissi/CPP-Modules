/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 05:37:06 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/04 21:25:10 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while (i < ac)
        {
            std::string str = av[i];
            for (size_t j = 0; j < str.length(); j++)
            {
                if (str[j] >= 'a' && str[j] <= 'z')
                {
                    str[j] = str[j] - 32;
                }
            }
            std::cout << str;
            i++;
        }
    }
    return 0;
}