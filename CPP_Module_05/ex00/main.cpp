#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("juyang", 150);
		std::cout << a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("juyang", 1);
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat c("junghwki", 1);
		c.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat d("junghwki", 150);
		d.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat f("junghwki", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat e("junghwki", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}