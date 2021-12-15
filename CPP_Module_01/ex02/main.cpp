#include <iostream>

int	main(void)
{
	std::string str;
	std::string* stringPTR;
	std::string& stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "string Address    : " << &str << std::endl;
	std::cout << "stringPTR Address : " << &stringPTR << std::endl;
	std::cout << "stringREF Address : " << &stringREF << std::endl;
	std::cout << "stringPTR         : " << *stringPTR << std::endl;
	std::cout << "stringREF         : " << stringREF << std::endl;
	return (0);
}