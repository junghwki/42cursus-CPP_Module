#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("junghwki");
	ScavTrap b(a);
	ScavTrap c;
	ClapTrap d("juyang");

	c = a;
	std::cout << "================================== attack ==================================" <<std::endl;
	a.attack("juyang");
	b.attack("juyang");
	c.attack("juyang");
	d.attack("juyang");
	std::cout << "================================ takeDamage ================================" <<std::endl;
	a.takeDamage(10);
	b.takeDamage(10);
	c.takeDamage(10);
	d.takeDamage(10);
	std::cout << "================================ beRepaired ================================" <<std::endl;
	a.beRepaired(10);
	b.beRepaired(10);
	c.beRepaired(10);
	d.beRepaired(10);
	std::cout << "================================ guard Gate ================================" <<std::endl;
	a.guardGate();
	b.guardGate();
	c.guardGate();
	// d.guardGate();
	std::cout << "============================================================================" <<std::endl;
	return (0);
}