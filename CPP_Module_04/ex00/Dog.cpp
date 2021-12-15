#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &dog)
: Animal(dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	Animal::operator=(dog);
	std::cout << "Dog Assignation operator called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
