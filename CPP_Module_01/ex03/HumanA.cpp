#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type)
{
	this->_name = name;
	this->_weapon = &type;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}