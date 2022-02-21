#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
    private:
        std::string const _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator = (RobotomyRequestForm const & rhs);
        void execute(Bureaucrat const & executor) const;
};

#endif