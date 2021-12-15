#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(const Cat &cat)
: Animal(cat)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain(*(cat._brain));
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	Animal::operator=(cat);
	*(this->_brain) = *(cat._brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
