#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &cat)
: Animal(cat)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	Animal::operator=(cat);
	std::cout << "Cat Assignation operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
