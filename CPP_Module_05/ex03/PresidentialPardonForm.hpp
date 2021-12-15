#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm :  public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& arg);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& arg);
	void Action() const;
	static Form* makePForm(std::string target);
};

#endif