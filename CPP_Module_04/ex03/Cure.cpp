#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{
	// std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure& copy)
: AMateria(copy)
{
	// std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure Destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& cure)
{
	// std::cout << "Cure Assignation operator called" << std::endl;
	this->_type = cure._type;
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
