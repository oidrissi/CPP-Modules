#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("Bob", 1);
    Bureaucrat b2("Bobi", 151);
    Bureaucrat b3("Mobi", 150);
    std::cout << b << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    
    try
    {
        b.incrementGrade();
        std::cout << "Incrementing grade, what happens?" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception Caught: " << e.what() << std::endl;
    }
    std::cout << b.getName() << " : "<< b.getGrade() << std::endl; 
    // try
    // {
    //     b.incrementGrade();
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << "Exception Caught:" << e.what() << std::endl;
    // }
    // try
    // {
    //     b2.decrementGrade();
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     b3.decrementGrade();
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    return 0;
}