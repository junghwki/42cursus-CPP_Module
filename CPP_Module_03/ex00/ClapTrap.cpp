#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("ClapTrap"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
: _name(claptrap._name), _hitPoint(claptrap._hitPoint), _energyPoint(claptrap._energyPoint), _attackDamage(claptrap._attackDamage)
{
	std::cout << "[ClapTrap] Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	std::cout << "[ClapTrap] Assignation operator called" << std::endl;
	if (this == &claptrap)
		return (*this);
	this->_name = claptrap._name;
	this->_hitPoint = claptrap._hitPoint;
	this->_energyPoint = claptrap._energyPoint;
	this->_attackDamage = claptrap._attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const& target)
{
	std::cout << "[ClapTrap] <" << this->_name << "> attacks <" << target << ">, causing <" << this->_attackDamage << "> points of Damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ClapTrap] <" << this->_name << "> take <" << amount << "> points of Damage! ";
	this->_hitPoint -= amount;
	std::cout << "Current Hit Point <" << this->_hitPoint << ">" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[ClapTrap] <" << this->_name << "> repaired <" << amount << "> points! ";
	this->_hitPoint += amount;
	std::cout << "Current Hit Point <" << this->_hitPoint << ">" << std::endl;
}