#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	
public:
	Cure();
	~Cure();
	Cure(const Cure& copy);
	Cure& operator=(const Cure& cure);
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif