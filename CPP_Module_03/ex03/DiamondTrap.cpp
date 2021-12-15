#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("DiamondTrap_clap_name", 100, 50, 30), _name("DiamondTrap")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap)
: ClapTrap(diamondtrap), _name(diamondtrap._name)
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout << "[DiamondTrap] Name constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondtrap)
{
	ClapTrap::operator=(diamondtrap);
	std::cout << "[DiamondTrap] Assignation operator called" << std::endl;
	this->_name = diamondtrap._name;
	return (*this);
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "[DiamondTrap] my name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl; 
}