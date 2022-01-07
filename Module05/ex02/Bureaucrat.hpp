#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        Bureaucrat & operator = (Bureaucrat const & rhs);
        std::string signForm(Form const &form);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void executeForm(Form const & form);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs);

#endif