/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:29:17 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/21 06:10:22 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        virtual ~Intern();
        Intern & operator = (Intern const & rhs);
        Form * makeForm(std::string const formName, std::string const target);
        class UnknownFormException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif