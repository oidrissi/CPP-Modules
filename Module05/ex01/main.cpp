#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat	test1("test1", 2);
		Form		test2("test2", 15, 15);
		test2.beSigned(test1);
		std::cout << test1.signForm(test2) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}