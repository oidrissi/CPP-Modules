#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

    /* Constructor with parameters */
    /* --------------------------- */

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called" << std::endl;
    if (_gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (_gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (_gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (_gradeToExecute < 1)
        throw Form::GradeTooHighException();
}

    /* Destructor */
    /* ---------- */

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

    /* copy constructor */
    /* ---------------- */

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << "Form copy constructor called" << std::endl;
    if (_gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (_gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (_gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (_gradeToExecute < 1)
        throw Form::GradeTooHighException();
}

    /* Grade getter */
    /* ------------ */

int Form::getGradeToSign() const
{
    if (_gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (_gradeToSign < 1)
        throw Form::GradeTooHighException();
    return _gradeToSign;
}

    /* Grade getter */
    /* ------------ */

int Form::getGradeToExecute() const
{
    if (_gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    return _gradeToExecute;
}

    /* Name Getter */
    /* ----------- */

std::string Form::getName() const
{
    return _name;
}

    /* Sign form */
    /* ---------- */

bool    Form::getSigned() const
{
    return _signed;
}

void    Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    if (b.getGrade() < 1)
        throw Form::GradeTooHighException();
    _signed = true;
}

    /* GradeTooHighException */
    /* --------------------- */

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

    /* GradeTooLowException */
    /* -------------------- */

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

    /* NotSignedException */
    /* ------------------- */

const char* Form::NotSignedException::what() const throw()
{
    return ("Form is not signed");
}

    /* Operator = overload */
    /* -------------------- */

Form & Form::operator = (Form const & rhs)
{
    std::cout << "Form operator = overload called" << std::endl;
    if (this != &rhs)
        _signed = rhs._signed;
    return *this;
}

    /* Operator << overload */
    /* --------------------- */

std::ostream & operator << (std::ostream & o, Form const & rhs)
{
    o << "Form: " << rhs.getName() << std::endl;
    o << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
    o << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
    return o;
}