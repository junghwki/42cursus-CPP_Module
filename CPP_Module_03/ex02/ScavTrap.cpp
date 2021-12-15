#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
: ClapTrap(scavtrap)
{
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name, 100, 50, 20)
{
	std::cout << "[ScavTrap] Name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	ClapTrap::operator=(scavtrap);
	std::cout << "[ScavTrap] Assignation operator called" << std::endl;
	return (*this);
}

void ScavTrap::attack(std::string const& target)
{
	std::cout << "[ScavTrap] <" << this->_name << "> attacks <" << target << ">, causing <" << this->_attackDamage << "> points of Damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "[ScavTrap] have enterred in Gate keeper mode." << std::endl;
}