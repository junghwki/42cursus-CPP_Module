#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie ret;

	ret.setName(name);
	ret.announce();
}