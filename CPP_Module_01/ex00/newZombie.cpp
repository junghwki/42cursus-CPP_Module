#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* ret;

	ret = new Zombie;
	ret->setName(name);
	ret->announce();
	return (ret);
}