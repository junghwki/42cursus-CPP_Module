#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _amateria[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& copy);
	MateriaSource& operator=(const MateriaSource& materia);
	void learnMateria(AMateria* amateria);
	AMateria* createMateria(std::string const& type);
};

#endif