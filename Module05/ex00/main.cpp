#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Bob", 1);
        std::cout << b << std::endl;
        Bureaucrat b2("Bobi", 149);
        std::cout << b2 << std::endl;
        Bureaucrat b3("Mobi", 150);
        std::cout << b3 << std::endl;
        b.incrementGrade();
        // b2.decrementGrade();
        b3.decrementGrade();
        std::cout << b << std::endl;
        // std::cout << b2 << std::endl;
        std::cout << b3 <<  std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}