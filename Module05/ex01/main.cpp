#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat	test1("test1", 10);
		Form		test2("test2", 11, 15);
		std::cout << test2 << std::endl;
		test2.beSigned(test1);
		std::cout << test1.signForm(test2) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}