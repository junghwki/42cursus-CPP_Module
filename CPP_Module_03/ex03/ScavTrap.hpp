#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// class ScavTrap : public ClapTrap
class ScavTrap : virtual public ClapTrap
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
