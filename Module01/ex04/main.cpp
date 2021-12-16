/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:09:54 by oidrissi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/15 12:28:42 by oidrissi         ###   ########.fr       */
=======
/*   Updated: 2021/12/16 21:26:55 by oidrissi         ###   ########.fr       */
>>>>>>> a0a6e2353db555ff9979f27fa3061d139f0e91da
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
<<<<<<< HEAD
    // int k = 0;
=======
>>>>>>> a0a6e2353db555ff9979f27fa3061d139f0e91da
    
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
<<<<<<< HEAD
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
=======
    if (!ifs)
    {
        std::cout << "File doesn't exist" << std::endl;
        return;
    }
    std::string line;
    std::string newline;
    std::ofstream ofs(file + ".replace");
    while (std::getline(ifs, line))
    {
        newline = "";
        std::string::size_type pos = 0;
        if ((pos = line.find(s1, pos)) == std::string::npos)
            newline += line;
        else
        {
            while ((pos = line.find(s1, pos)) != std::string::npos)
            {
                newline = replacement(line, s1, s2);
                pos += s2.size();
            }
        }
        ofs << newline << std::endl;
>>>>>>> a0a6e2353db555ff9979f27fa3061d139f0e91da
    }
    ifs.close();
    ofs.close();
}

<<<<<<< HEAD
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
=======
int main(int ac, char **av)//main main hjgdhjjgsd
{
    if (ac == 4)
    {
        if (av[2][0] == '\0' || av[3][0] == '\0')
        {
            std::cout << "Error: empty string" << std::endl;
            return (0);
        }
        ft_replace(av[1], av[2], av[3]);
    }
    else
        std::cout << "usage: ./replace [file] [s1] [s2]" << std::endl;
>>>>>>> a0a6e2353db555ff9979f27fa3061d139f0e91da
    return (0);
}