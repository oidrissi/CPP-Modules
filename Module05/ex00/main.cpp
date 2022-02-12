#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("Bob", 1);
    Bureaucrat b2("Abby", 151);
    Bureaucrat b3("Mordor", 150);
    std::cout << "----------------  " << std::endl;
    std::cout << b << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    
    try
    {
        std::cout << "----------------  " << std::endl;
        std::cout << "Incrementing grade of " << b.getName() << ", what happens?" << std::endl;
        b.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception Caught: " << e.what() << std::endl;
        std::cout << "----------------  " << std::endl;
    }
    try
    {
        std::cout << "Decrementing grade of " << b2.getName() << ", what happens?" << std::endl;
        b2.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception Caught: " << e.what() << std::endl;
        std::cout << "----------------  " << std::endl;

    }
    std::cout << b.getName() << " : "<< b.getGrade() << std::endl;
    std::cout << b2.getName() << " : " << b2.getGrade() << std::endl;
    std::cout << "----------------  " << std::endl;

    return 0;
}