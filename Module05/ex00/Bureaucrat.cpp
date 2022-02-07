#include "Bureaucrat.hpp"

    /* Default constructor */
    /* ------------------- */

// Bureaucrat::Bureaucrat() : _name(""), _grade(150)
// {
//     std::cout << "Bureaucrat default constructor called" << std::endl;
// }


    /* GradeTooHighException */
    /* --------------------- */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

    /* GradeTooLowException */
    /* -------------------- */

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

    /* Constructor with parameters */
    /* --------------------------- */

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    try {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    this->_grade = grade;
}

    /* Destructor */
    /* ---------- */

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

    /* copy constructor */
    /* ---------------- */

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    try {
        if (_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (const std::exception & e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    _grade = src._grade;
}

    /* Grade getter */
    /* ------------ */

int Bureaucrat::getGrade() const
{
    return _grade;
}

    /* Name Getter */
    /* ----------- */

std::string Bureaucrat::getName() const
{
    return _name;
}

    /* Overload of the assignment operator */
    /* ----------------------------------- */

Bureaucrat & Bureaucrat::operator = (Bureaucrat const &rhs)
{
    std::cout << "Bureaucrat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _grade = rhs._grade;
    }
    return *this;
}

    /* Overload of the output operator */
    /* ------------------------------- */

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}

    /* IncrementGrade */
    /* ------------- */

void Bureaucrat::incrementGrade()
{
    _grade--;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

    /* DecrementGrade */
    /* ------------- */

void Bureaucrat::decrementGrade()
{
    _grade++;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}