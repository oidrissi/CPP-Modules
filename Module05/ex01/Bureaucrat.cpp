#include "Bureaucrat.hpp"

    /* Default constructor */
    /* ------------------- */

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

    /* Constructor with parameters */
    /* --------------------------- */

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    std::cout << "Bureaucrat " << name << " constructor called" << std::endl;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
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
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade = src._grade;
}

    /* Grade getter */
    /* ------------ */

int Bureaucrat::getGrade() const
{
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
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

    /* IncrementGrade */
    /* ------------- */

void Bureaucrat::incrementGrade()
{
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade--;
}

    /* DecrementGrade */
    /* ------------- */

void Bureaucrat::decrementGrade()
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade++;
}

    /* Signing Form */

std::string Bureaucrat::signForm(Form const &form)
{
    if (form.getSigned() == true)
        return (this->getName() + " signed " + form.getName());
    else
        std::cout << "WHAT THE FUCK" << std::endl;
        //return ("Bureaucrat " + this->getName() + "'s Form not signed " + "Grade" + std::to_string(this->getGrade()) + "out of range");
    return ("Form not signed for some reason");
}
