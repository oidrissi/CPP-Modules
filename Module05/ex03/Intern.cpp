/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:29:15 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/21 06:18:37 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const &src)
{
    std::cout << "Intern copy constructor called" << std::endl;
    (void)src;
}


Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator = (Intern const & rhs)
{
    std::cout << "Intern assignment operator called" << std::endl;
    (void)rhs;
    return *this;
}

const char* Intern::UnknownFormException::what() const throw()
{
    return ("Unknown form");
}

Form * Intern::makeForm(std::string const formName, std::string const target)
{
    // map each form name to an int
    // 0 = ShrubberyCreationForm
    // 1 = PresidentialPardonForm
    // 2 = RobotomyRequestForm
    int form = -1;
    if (formName == "shrubbery creation")
        form = 0;
    else if (formName == "robotomy request")
        form = 1;
    else if (formName == "presidential pardon")
        form = 2;
    Form *newForm = NULL;
    try
    {
        switch (form)
        {
            case 0:
                newForm = new ShrubberyCreationForm(target);
                std::cout << "Intern creates " << formName << " for " << target << std::endl;
                break ;
            case 1:
                newForm = new RobotomyRequestForm(target);
                std::cout << "Intern creates " << formName << " for " << target << std::endl;
                break ;
            case 2: 
                newForm = new PresidentialPardonForm(target);
                std::cout << "Intern creates " << formName << " for " << target << std::endl;
                break ;
            default:
                throw Intern::UnknownFormException();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return newForm;
}