#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wronganimal)
: _type(wronganimal._type)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this == &wronganimal)
		return (*this);
	this->_type = wronganimal.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout<< "WrongAnimal" << std::endl;
}