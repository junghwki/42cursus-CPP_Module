#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("jimkwon", 100);
        Form f1("wrong form", 1, 1);
        Form f2("jimkwon's form", 150, 150);
        std::cout << "====================== PRINT FORM ======================" << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2;
        std::cout << "====================== SIGN  FORM ======================" << std::endl;
		b1.signForm(f1);
		b1.signForm(f2);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}