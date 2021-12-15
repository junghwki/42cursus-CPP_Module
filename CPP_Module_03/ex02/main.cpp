#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("junghwki");
	ScavTrap b("juyang");
	FragTrap c("sehan");

	std::cout << "================================ attack ================================" <<std::endl;
	a.attack("juyang");
	b.attack("juyang");
	c.attack("juyang");
	std::cout << "============================== takeDamage ==============================" <<std::endl;
	a.takeDamage(10);
	b.takeDamage(10);
	c.takeDamage(10);
	std::cout << "============================== beRepaired ==============================" <<std::endl;
	a.beRepaired(10);
	b.beRepaired(10);
	c.beRepaired(10);
	std::cout << "========================================================================" <<std::endl;
	b.guardGate();
	c.highFivesGuys();
	std::cout << "========================================================================" <<std::endl;
	return (0);
}