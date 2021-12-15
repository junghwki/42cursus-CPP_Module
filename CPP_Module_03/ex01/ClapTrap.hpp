#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPoint;
	int _energyPoint;
	int _attackDamage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage);
	ClapTrap(const ClapTrap& claptrap);
	ClapTrap& operator=(const ClapTrap& claptrap);
	ClapTrap(std::string name);
	void attack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
