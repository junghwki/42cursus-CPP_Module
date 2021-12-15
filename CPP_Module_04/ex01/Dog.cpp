#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(const Dog &dog)
: Animal(dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain(*(dog._brain));
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	Animal::operator=(dog);
	*(this->_brain) = *(dog._brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
