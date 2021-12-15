#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		this->_amateria[idx] = NULL;
		idx++;
	}	
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	int	idx;

	idx = 0;
	while (idx < 4 && this->_amateria[idx])
	{
		delete this->_amateria[idx];
		idx++;
	}	
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materia)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		this->_amateria[idx] = materia._amateria[idx]->clone();
		idx++;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* amateria)
{
	int idx;

	idx = 0;
	if (!amateria)
		return ;
	while (idx < 4)
	{
		if (!this->_amateria[idx])
		{
			this->_amateria[idx] = amateria;
			return ;
		}
		idx++;
	}
	//delete amateria;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	int idx;

	idx = 0;
	while (idx < 4)
	{
		if (this->_amateria[idx] && this->_amateria[idx]->getType() == type)
			return (this->_amateria[idx]->clone());
		idx++;
	}
	return (NULL);
}