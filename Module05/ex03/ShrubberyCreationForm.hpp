#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    private:
        ShrubberyCreationForm();
        std::string const _target;
    public:
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator = (ShrubberyCreationForm const & rhs);
        void execute(Bureaucrat const & executor) const;
};

#endif