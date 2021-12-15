#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int _rawBits;
	static const int _fractonalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator=(const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	void setRawBits(float const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed(const int num);
	Fixed(const float num);
};

std::ostream& operator<<(std::ostream &out, Fixed const &value);

#endif