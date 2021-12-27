/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:49:56 by oidrissi          #+#    #+#             */
/*   Updated: 2021/12/16 21:34:52 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen karen("Karen");
    karen.complain("debug");
    karen.complain("info");
    karen.complain("warning");
    karen.complain("error");
    karen.complain("badmessage");
    return (0);
}