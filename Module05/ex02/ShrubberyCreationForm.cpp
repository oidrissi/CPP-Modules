#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137)
{
    (void)target;
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    (void)rhs;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->getSigned())
            throw Form::NotSignedException();
        else if (executor.getGrade() > this->getGradeToExecute())
            throw Form::GradeTooLowException();
        else
        {
            std::cout << "Bureaucrat " << executor.getName() << " executes ShrubberyCreationForm" << std::endl;
            std::ofstream file; 
            file.open(_target + "_shrubbery", std::fstream::out);
            file << "          _{ _{}/}/}__}          " << std::endl;
            file << "          {{/}{/{/}(}{/} _          " << std::endl;
            file << "        {/{/}{/{/}(_)}{/{/}  _          " << std::endl;
            file << "       {{/(}}{/{/}}{/){/}} /}          " << std::endl;
            file << "      {/{/(_)/}{{/)}{(_){/}/}/}/}          " << std::endl;
            file << "     _{{/{/{{/{/(_)/}/}/}{(/}/}/}          " << std::endl;
            file << "      {/{/{{{(/}{{/}/}{}(_){/}}          " << std::endl;
            file << "     _{{/{{/(_)}/}{/{/{/}})}{/}          " << std::endl;
            file << "     {/{/{{(/}{/{{{/})/}{(_)/}/}}          " << std::endl;
            file << "     {{/}(_){{{/}/}(_){/}{/}/})/}          " << std::endl;
            file << "     {{/{{/}{/{{{/}/}{{/}/}}(_)          " << std::endl;
            file << "     {/{{/}{/){{{/}/}{{(/}/}}/}          " << std::endl;
            file << "     {/{{/}(_){{{(/}/}{(_)/}/}}          " << std::endl;
            file << "      {/({/{{/{{/}(_){/}/}}/}(}          " << std::endl;
            file << "       (_){/{/}{{/}/}{{)/}/}(_)          " << std::endl;
            file << "         {/{/{{/}{/{{{(_)/}          " << std::endl;
            file << "           /{/{{{/}/}{{}/}          " << std::endl;
            file << "            {){/ {/}{/} }}          " << std::endl;
            file << "             (_)  .-.-/          " << std::endl;
            file << "       __...--- |'-.-'| --...__          " << std::endl;
            file << " _...--   .-'   |'-.-'|  ' -.  --..__          " << std::endl;
            file << " -  ' .  . '    |.'-._| '  . .     jro          " << std::endl;
            file << " '-  '    .--'  | '-.'|    .  '  .          "  << std::endl;
            file << "       ' ..     |'-_.-|          " << std::endl;
            file << "  '  .       _.-|-._ -|-._  .  '  .          " << std::endl;
            file << "           .'   |'- .-|   .          " << std::endl;
            file << ".-'   ' .  '.   `-._.-�   .'    - .          " << std::endl;
            file << ".-' '        '-._______.-'       .          "<< std::endl;
            file <<  "           .      ~,          " << std::endl;
            file <<  "        .       .   |   .    ' '-.          " << std::endl;
            file <<  "        ___________/  ____________          " << std::endl;
            file <<   "         /  Why is it, when you want"  << std::endl;
            file <<  "         |  something, it is so damn   |" << std::endl;
            file <<  "      |    much work to get it?     |" << std::endl;
            file <<  "        ___________________________/" << std::endl;
            file.close();
        }
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &			operator<<( std::ostream & o, const ShrubberyCreationForm & shrubbery )
{
	if (shrubbery.getSigned())
		o << shrubbery.getName() << " is signed";
	else
		o << shrubbery.getName() << " is not signed";
	return o;
}