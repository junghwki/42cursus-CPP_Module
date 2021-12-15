#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* ret;
	int idx;

	idx = 0;
	ret = new Zombie[N];
	while (idx < N)
	{
		ret[idx].setName(name);
		ret[idx].announce();
		idx++;
	}
	return (ret);
}