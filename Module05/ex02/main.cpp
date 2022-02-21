#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  c("Abby", 80);
    ShrubberyCreationForm   a("Exam_01");
    RobotomyRequestForm     b("Exam_02");
    PresidentialPardonForm  d("Exam_03");

    std::cout << "-------------------------------------------" << std::endl;
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    // std::cout << d << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    a.beSigned(c);
    std::cout << "-------------------------------------------" << std::endl;
    try
    {
        a.execute(c);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << b << std::endl;
    b.beSigned(c);
    try
    {
        b.execute(c);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
    d.beSigned(c);
    std::cout << d << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    try
    {
        d.execute(c);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
    // std::cout << "-------------------------------------------" << std::endl;
    return(0);
}