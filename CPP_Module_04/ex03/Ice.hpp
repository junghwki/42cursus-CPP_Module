#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	
public:
	Ice();
	~Ice();
	Ice(const Ice& copy);
	Ice& operator=(const Ice& ice);
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif