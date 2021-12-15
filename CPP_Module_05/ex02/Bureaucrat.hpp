#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& arg);
	Bureaucrat(const Bureaucrat& arg);
	Bureaucrat(const std::string name, int grade);
	std::string getName();
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	void signForm(Form& form);
	void executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat& value);

#endif