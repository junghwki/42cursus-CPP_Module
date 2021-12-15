#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongcat)
: WrongAnimal(wrongcat)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	WrongAnimal::operator=(wrongcat);
	std::cout << "WrongCat Assignation operator called" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow" << std::endl;
}
