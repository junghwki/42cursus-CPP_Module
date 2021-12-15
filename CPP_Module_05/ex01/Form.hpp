#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _toSign;
	const int _toExecute;
public:
	Form();
	Form(const Form& arg);
	Form(std::string name, int toSign, int toExecute);
	~Form();
	Form& operator=(const Form& arg);
	const std::string getName();
	bool getSigned();
	const int getToSign();
	const int getToExecute();
	void beSigned(Bureaucrat& arg);
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream& out,Form& value);

#endif