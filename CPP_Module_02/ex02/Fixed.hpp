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
	Fixed(const Fixed& fixed);
	Fixed(const int num);
	Fixed(const float num);
	bool operator>(Fixed &fixed);
	bool operator<(Fixed &fixed);
	bool operator>=(Fixed &fixed);
	bool operator<=(Fixed &fixed);
	bool operator==(Fixed &fixed);
	bool operator!=(Fixed &fixed);
	Fixed& operator=(const Fixed& fixed);
	const Fixed& operator+(const Fixed& fixed);
	const Fixed& operator-(const Fixed& fixed);
	const Fixed& operator*(const Fixed& fixed);
	const Fixed& operator/(const Fixed& fixed);

	Fixed& operator++(void);
	Fixed& operator--(void);
	//후위연산 구분을위해 int
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed& min(Fixed& fixed1, Fixed& fixed2);
	static Fixed& max(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
	static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	void setRawBits(float const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& fixed);

#endif
