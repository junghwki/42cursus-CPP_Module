#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("junghwki");
	DiamondTrap b(a);
	DiamondTrap c;

	c = a;
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
	std::cout << "================================ whoAmI ================================" <<std::endl;
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	std::cout << "========================================================================" <<std::endl;
	a.guardGate();
	a.highFivesGuys();
	std::cout << "========================================================================" <<std::endl;
	return (0);
}