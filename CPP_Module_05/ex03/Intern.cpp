#include "Intern.hpp"

Intern::Intern()
{
	this->_makeFormPtr[0] = &PresidentialPardonForm::makePForm;
	this->_makeFormPtr[1] = &RobotomyRequestForm::makeRForm;
	this->_makeFormPtr[2] = &ShrubberyCreationForm::makeSForm;
}

Intern::Intern(const Intern& arg)
{
	this->_makeFormPtr[0] = &PresidentialPardonForm::makePForm;
	this->_makeFormPtr[1] = &RobotomyRequestForm::makeRForm;
	this->_makeFormPtr[2] = &ShrubberyCreationForm::makeSForm;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& arg)
{
	(void)arg;
	return (*this);
}

const char* Intern::CannotFindForm::what() const throw()
{
	return ("can't find form");
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form* ret;
	std::string name_array[3];
	int	idx;

	idx = 0;
	name_array[0] = "PresidentialPardonForm";
	name_array[1] = "RobotomyRequestForm";
	name_array[2] = "ShrubberyCreationForm";
	while (idx < 3)
	{
		if (name_array[idx] == name)
		{
			ret = this->_makeFormPtr[idx](target);
			std::cout << "Intern creates " << name << std::endl;
			return (ret);
		}
		idx++;
	}
	throw Intern::CannotFindForm();
}
