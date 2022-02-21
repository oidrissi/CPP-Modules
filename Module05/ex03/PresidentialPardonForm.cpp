#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 25, 5)
{
    (void)target;
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    (void)rhs;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->getSigned())
            throw Form::NotSignedException();
        if (executor.getGrade() > this->getGradeToExecute())
            throw Form::GradeTooLowException();
        std::cout << "Bureaucrat " << executor.getName() << " executes PresidentialPardonForm" << std::endl;
        std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &			operator<<( std::ostream & o, const PresidentialPardonForm & presidential )
{
	if (presidential.getSigned())
		o << presidential.getName() << " is signed";
	else
		o << presidential.getName() << " is not signed";
	return o;
}