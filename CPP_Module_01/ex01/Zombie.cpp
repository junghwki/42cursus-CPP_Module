#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Zombie Destructor called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << '<' << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName()
{
	return(this->_name);
}