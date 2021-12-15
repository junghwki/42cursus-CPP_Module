#include "Karen.hpp"

Karen::Karen()
{
	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";
	_levelPtr[0] = &Karen::debug;
	_levelPtr[1] = &Karen::info;
	_levelPtr[2] = &Karen::warning;
	_levelPtr[3] = &Karen::error;
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int Karen::complain(std::string level)
{
	int idx;

	idx = 0;
	while (idx < 4)
	{
		if (this->_level[idx] == level)
		{
			return (idx);
		}
		idx++;
	}
	return (idx);
}

void Karen::filter(std::string level)
{
	int idx;
	idx = complain(level);
	switch (idx)
	{
		case 0:
			(this->*_levelPtr[0])();
			break;
		case 1:
			(this->*_levelPtr[1])();
			break;
		case 2:
			(this->*_levelPtr[2])();
			break;
		case 3:
			(this->*_levelPtr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}