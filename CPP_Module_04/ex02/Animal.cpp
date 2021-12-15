#include "Animal.hpp"

Animal::Animal()
: _type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
: _type(animal._type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this == &animal)
		return (*this);
	this->_type = animal.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
