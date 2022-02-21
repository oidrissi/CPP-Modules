/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 05:45:17 by oidrissi          #+#    #+#             */
/*   Updated: 2022/02/21 06:26:49 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat someRandomBureaucrat("oidrissi", 40);
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "oidrissi");
    std::cout << *rrf << std::endl;
    try
    {
        someRandomBureaucrat.signForm(*rrf);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        someRandomBureaucrat.executeForm(*rrf);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}