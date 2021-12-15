#include <iostream>
#include "Convert.hpp"

int	main(int argc, char* argv[])
{
	if (argc == 2)
	{
		Convert convert(argv[1]);
	}
	else
	{
		std::cerr << "arguments error" << std::endl;
		return (-1);
	}
	return (0);
}