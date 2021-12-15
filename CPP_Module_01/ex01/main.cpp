#include "Zombie.hpp"

int main (void)
{
	Zombie* ret;

	ret = zombieHorde(3, "sehan");
	delete [] ret;
	return (0);
}