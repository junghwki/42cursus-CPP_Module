#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void test(Bureaucrat& b, Form* f)
{
    std::cout << "============================== TESTCASE ==============================" << std::endl;
    try
	{
        b.executeForm(*f);
    }
    catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }
    try
	{
        b.signForm(*f);
    }
    catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }
    std::cout << *f;
    try
	{
        b.executeForm(*f);
    }
    catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }
    try
	{
        b.signForm(*f);
    }
    catch (std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    Intern intern;
    Form* p;
    Form* r;
    Form* s;
    Form* nothing;
    Bureaucrat jeongwle("jeongwle", 1);
    Bureaucrat junghwki("junghwki", 25);
    Bureaucrat mki("mki", 72);
    Bureaucrat ukwon("ukwon", 145);

	try
	{
		p = intern.makeForm("PresidentialPardonForm", "juyang2");
		r = intern.makeForm("RobotomyRequestForm", "juyang1");
		s = intern.makeForm("ShrubberyCreationForm", "juyang");
	    nothing = intern.makeForm("nothing", "sehan");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    std::cout << std::endl;
    std::cout << *p << std::endl;
    std::cout << *r << std::endl;
    std::cout << *s << std::endl;
    test(ukwon, p);
    test(ukwon, r);
    test(ukwon, s);
    test(jeongwle, p);
    test(junghwki, r);
    test(mki, s);
    delete p;
    delete r;
    delete s;
	// system("leaks main");
    return (0);
}
