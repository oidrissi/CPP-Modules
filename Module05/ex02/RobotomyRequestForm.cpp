#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const _target) : Form("RobotomyRequestForm", 72, 45)
{
    this->_target = _target;
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            std::cout << _target << "has been robotomized successfully" << std::endl;
        else
            std::cout << _target << "has not been robotomized" << std::endl;
    }
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    (void)rhs;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            std::cout << this->_target << "has been robotomized successfully" << std::endl;
        else
            std::cout << this->_target << "has not been robotomized" << std::endl;
    }
}