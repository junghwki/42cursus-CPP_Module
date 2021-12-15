#include "Karen.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Karen karen;
		karen.filter(argv[1]);
	}
	else
	{
		std::cout << "Arguments Error" << std::endl;
		return (-1);
	}
	return (0);
}