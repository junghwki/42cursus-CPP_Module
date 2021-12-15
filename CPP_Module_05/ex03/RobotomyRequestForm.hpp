#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class RobotomyRequestForm :  public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& arg);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& arg);
	void Action() const;
	static Form* makeRForm(std::string target);
};

#endif