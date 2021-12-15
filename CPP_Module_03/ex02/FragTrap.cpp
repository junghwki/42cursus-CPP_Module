#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
: ClapTrap(fragtrap)
{
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name, 100, 100, 30)
{
	std::cout << "[FragTrap] Name constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& fragtrap)
{
	ClapTrap::operator=(fragtrap);
	std::cout << "[FragTrap] Assignation operator called" << std::endl;
	return (*this);
}

void FragTrap::attack(std::string const& target)
{
	std::cout << "[FragTrap] <" << this->_name << "> attacks <" << target << ">, causing <" << this->_attackDamage << "> points of Damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] request Positive High Fives" << std::endl;
}