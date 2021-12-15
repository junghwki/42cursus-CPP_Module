#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 72, 45), _target("default target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& arg)
: Form("RobotomyRequestForm", 72, 45), _target(arg._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& arg)
{
	this->_target = arg._target;
	return (*this);
}

void RobotomyRequestForm::Action() const
{
	std::cout << "Drrrrrr...!!!!!\n";
	srand(time(NULL));
	int a = rand() % 2;
	if (a < 1)
		std::cout << this->_target << " has been robotomized successfully 50% of the time\n";
	else
		std::cout << "It’s a failure\n";
}