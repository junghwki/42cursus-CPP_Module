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
	virtual ~Form();
	Form& operator=(const Form& arg);
	const std::string getName() const;
	bool getSigned();
	const int getToSign();
	const int getToExecute() const;
	void beSigned(Bureaucrat& arg);
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class NotSignedException : public std::exception
	{
		const char* what() const throw();
	};
	void execute(Bureaucrat const& executor) const;
	virtual void Action() const = 0;
};

std::ostream &operator<<(std::ostream& out, Form& value);

#endif