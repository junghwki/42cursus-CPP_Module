#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: _name("default name"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& arg)
: _name(arg._name), _grade(arg._grade)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
: _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& arg)
{
	this->_grade = arg._grade;
	return (*this);
}

std::string Bureaucrat::getName()
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

std::ostream& operator<<(std::ostream &out, Bureaucrat& value)
{
	out << "<" << value.getName() << ">, bureaucrat grade <" << value.getGrade() << ">." << std::endl;
	return (out);
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
