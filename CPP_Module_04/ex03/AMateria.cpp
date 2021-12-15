#include "AMateria.hpp"

AMateria::AMateria()
: _type("AMateria")
{
	// std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
: _type(copy._type)
{
	// std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
: _type(type)
{
	// std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	// std::cout << "AMateria Assignation operator called" << std::endl;
	if (this == &amateria)
		return (*this);
	this->_type = amateria._type;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria " << target.getName() << " *" << std::endl;
}