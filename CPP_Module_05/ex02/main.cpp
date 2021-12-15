#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	RobotomyRequestForm a;
	Bureaucrat b1("juyang", 150);
	Bureaucrat b2("junghwki", 1);
	std::cout << "========================== RobotomyRequestForm ==========================" << std::endl;
	try
	{
		b1.signForm(a);
		b2.signForm(a);
		a.execute(b1);
		// a.execute(b2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	ShrubberyCreationForm b;
	std::cout << "========================= ShrubberyCreationForm =========================" << std::endl;
	try
	{
		b1.signForm(b);
		b2.signForm(b);
		b.execute(b1);
		// b.execute(b2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	b.Action();

	PresidentialPardonForm c;
	std::cout << "======================== PresidentialPardonForm  ========================" << std::endl;
	try
	{
		b1.signForm(c);
		b2.signForm(c);
		c.execute(b1);
		// c.execute(b2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}