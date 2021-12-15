#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this)
	this->_rawBits = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw << this->_fractonalBits;
}

void Fixed::setRawBits(float const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = roundf(raw * (1 << this->_fractonalBits));
}

float Fixed::toFloat(void) const
{
	return ((float)(this->_rawBits) / (1 << this->_fractonalBits));
}

int Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_fractonalBits);
}

Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num);
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits(num);
}

bool Fixed::operator>(Fixed &fixed)
{
	return (this->_rawBits > fixed.getRawBits());
}

bool Fixed::operator<(Fixed &fixed)
{
	return (this->_rawBits < fixed.getRawBits());
}

bool Fixed::operator>=(Fixed &fixed)
{
	return (this->_rawBits >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed &fixed)
{
	return (this->_rawBits <= fixed.getRawBits());
}

bool Fixed::operator==(Fixed &fixed)
{
	return (this->_rawBits == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed &fixed)
{
	return (this->_rawBits != fixed.getRawBits());
}

Fixed& Fixed::operator+(const Fixed& fixed)
{
	this->_rawBits += fixed.getRawBits();
	return (*this);
}

Fixed& Fixed::operator-(const Fixed& fixed)
{
	this->_rawBits -= fixed.getRawBits();
	return (*this);
}

Fixed& Fixed::operator*(const Fixed& fixed)
{
	this->_rawBits *= fixed.getRawBits() / (1 << this->_fractonalBits);
	return (*this);
}

Fixed& Fixed::operator/(const Fixed& fixed)
{
	this->_rawBits /= fixed.getRawBits() << this->_fractonalBits;
	return (*this);
}

Fixed& Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);

	this->_rawBits++;
	return (ret);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);

	this->_rawBits--;
	return (ret);
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.getRawBits() <= fixed2.getRawBits())
	{
		return (fixed1);
	}
	return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.getRawBits() >= fixed2.getRawBits())
	{
		return (fixed1);
	}
	return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.getRawBits() <= fixed2.getRawBits())
	{
		return (fixed1);
	}
	return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.getRawBits() >= fixed2.getRawBits())
	{
		return (fixed1);
	}
	return (fixed2);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}