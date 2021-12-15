#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 25, 5), _target("default target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 25, 5), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& arg)
: Form("ShrubberyCreationForm", 25, 5), _target(arg._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& arg)
{
	this->_target = arg._target;
	return (*this);
}

void ShrubberyCreationForm::Action() const
{
    std::string fileName = this->_target + "_shrubbery";
    std::ofstream ofs(fileName, std::ios::trunc);

	if (ofs.fail())
	{
		std::cerr << "Error!" << std::endl;
	}
    if (ofs.is_open())
    {
        ofs <<	"               ,@@@@@@@,\n"
				"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
				"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
				"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
				"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
				"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
				"       |o|        | |         | |\n"
				"       |.|        | |         | |\n"
				"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
        ofs.close();
    }
}

Form* ShrubberyCreationForm::makeSForm(std::string target)
{
	Form* ret = new ShrubberyCreationForm(target);

	return (ret);
}