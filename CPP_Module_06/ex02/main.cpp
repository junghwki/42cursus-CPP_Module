#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	// srand(time(NULL));
	int a = rand() % 3;
	if (a == 0)
		return (new A());
	else if (a == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "error" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e)
	{
		(void)e;
		// std::cerr << e.what() << std::endl;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception& e)
	{
		(void)e;
		// std::cerr << e.what() << std::endl;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception& e)
	{
		(void)e;
		// std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	srand(time(NULL));
	Base* a = generate();
	Base* b = generate();
	Base* c = generate();

	identify(a);
	identify(*a);
	identify(b);
	identify(*b);
	identify(c);
	identify(*c);
	return 0;
}