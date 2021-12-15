#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap& scavtrap);
	ScavTrap& operator=(const ScavTrap& scavtrap);
	ScavTrap(std::string name);
	void attack(std::string const& target);
	void guardGate();
};

#endif
