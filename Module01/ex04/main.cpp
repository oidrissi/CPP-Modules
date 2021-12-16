/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:09:54 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/15 12:28:42 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replacement(std::string str, std::string tbr, std::string rep)
{
    std::string res = "";
    size_t i = 0;
    size_t j = 0;
    // int k = 0;
    
    while (str[i])
    {
        if (str[i] == tbr[j])
        {
            j++;
            if (j == tbr.size())
            {
                res += rep;
                j = 0;
            }
        }
        else
        {
            res += str[i];
            j = 0;
        }
        i++;
    }
    return (res);
}

void ft_replace(std::string file, std::string s1, std::string s2)
{
    std::ifstream ifs(file);
    std::string line;
    std::string newline;
    std::ofstream ofs(file + ".replace");
    
    while (std::getline(ifs, line))
    {
        std::string::size_type pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            newline = replacement(line, s1, s2);
            pos += s2.size();
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        ft_replace(av[1], av[2], av[3]);
    }
    else
    {
        std::cout << "usage: ./replace [file] [s1] [s2]" << std::endl;
    }
    return (0);
}