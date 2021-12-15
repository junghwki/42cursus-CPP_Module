#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("juyang");
	ClapTrap b;
	ClapTrap c(a);
	ClapTrap d;

	d = a;
	std::cout << "================================== attack ==================================" << std::endl;
	a.attack("juyang");
	b.attack("juyang");
	c.attack("juyang");
	d.attack("juyang");
	std::cout << "================================ takeDamage ================================" << std::endl;
	a.takeDamage(20);
	b.takeDamage(0);
	c.takeDamage(0);
	d.takeDamage(0);
	std::cout << "================================ beRepaired ================================" << std::endl;
	a.beRepaired(10);
	b.beRepaired(10);
	c.beRepaired(10);
	d.beRepaired(10);
	std::cout << "============================================================================" << std::endl;
	return (0);
}