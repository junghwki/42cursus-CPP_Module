#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form* (*_makeFormPtr[4])(std::string);
public:
	Intern();
	Intern(const Intern& arg);
	~Intern();
	Intern& operator=(const Intern& arg);
	Form* makeForm(std::string name, std::string target);
	class CannotFindForm : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif