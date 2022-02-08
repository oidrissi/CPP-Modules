#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  c("eliass", 4);
    ShrubberyCreationForm   a("reda_home");
    RobotomyRequestForm     b("elias_home");
    PresidentialPardonForm  d("rayan_house");

    std::cout << "-------------------------------------------\n";
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << d << std::endl;
    std::cout << "-------------------------------------------\n";
    a.setFormSigned();
    std::cout << a << std::endl;
    std::cout << "-------------------------------------------\n";
    try
    {
        a.execute(c);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    b.setFormSigned();
    std::cout << b << std::endl;
    std::cout << "-------------------------------------------\n";
    try
    {
        b.execute(c);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------\n";
    d.setFormSigned();
    std::cout << d << std::endl;
    std::cout << "-------------------------------------------\n";
    try
    {
        d.execute(c);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------\n";
    c.executeForm(a);
    std::cout << "-------------------------------------------\n";
    return(0);
}