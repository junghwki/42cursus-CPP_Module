#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap& diamondtrap);
	DiamondTrap &operator=(const DiamondTrap& diamondtrap);
	DiamondTrap(std::string name);
	void attack(std::string const& target);
	void whoAmI();
};

#endif