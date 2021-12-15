#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", 145, 137), _target("default target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 145, 137), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& arg)
: Form("PresidentialPardonForm", 145, 137), _target(arg._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& arg)
{
	Form::operator=(arg);
	this->_target = arg._target;
	return (*this);
}

void PresidentialPardonForm::Action() const
{
	std::cout << "Tells us " << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
