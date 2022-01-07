#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
    // create a file called _target + "_shrubbery"
    std::ofstream file;
    file.open(_target + "_shrubbery");
    // write ASCII table to file
    for (int i = 0; i < 128; i++)
        file << static_cast<char>(i);
    file.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    (void)rhs;
    return (*this);
}

void    Form::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    std::cout << "Bureaucrat " << executor.getName() << " executes ShrubberyCreationForm for " << this->_target << std::endl;
}