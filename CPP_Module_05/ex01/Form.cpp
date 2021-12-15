#include "Form.hpp"

Form::Form()
: _name("default name"), _signed(false), _toSign(30), _toExecute(30)
{
}

Form::Form(const Form& arg)
: _name(arg._name), _signed(arg._signed), _toSign(arg._toExecute), _toExecute(arg._toExecute)
{
}

Form::Form(std::string name, int toSign, int toExecute)
: _name(name), _signed(false), _toSign(toSign), _toExecute(toExecute)
{
	if (toSign < 1 || toExecute < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (toSign > 150 || toExecute > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Form::~Form()
{
}

Form& Form::operator=(const Form& arg)
{
	this->_signed = arg._signed;
	return (*this);
}

const std::string Form::getName()
{
	return (this->_name);
}

bool Form::getSigned()
{
	return (this->_signed);
}

const int Form::getToSign()
{
	return (this->_toSign);
}

const int Form::getToExecute()
{
	return (this->_toExecute);
}

void Form::beSigned(Bureaucrat& arg)
{
	if (arg.getGrade() <= this->getToSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

std::ostream &operator<<(std::ostream& out, Form& value)
{
	out << "name       : " << value.getName() << std::endl;
	out << "signed     : " << value.getSigned() << std::endl;
	out << "to signed  : " << value.getToSign() << std::endl;
	out << "to execute : " << value.getToExecute() << std::endl;
	return (out);
}