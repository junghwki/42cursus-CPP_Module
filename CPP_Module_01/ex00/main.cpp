#include "Zombie.hpp"

int	main(void)
{
	Zombie* ret;
	ret = newZombie("42");//힙
	randomChump("42");//스택
	delete ret;

	return (0);
}