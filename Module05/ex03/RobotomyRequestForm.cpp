#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45)
{
    (void)target;
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    (void)rhs;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
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
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream &			operator<<( std::ostream & o, const RobotomyRequestForm & robotomy )
{
	if (robotomy.getSigned())
		o << robotomy.getName() << " is signed";
	else
		o << robotomy.getName() << " is not signed";
	return o;
}