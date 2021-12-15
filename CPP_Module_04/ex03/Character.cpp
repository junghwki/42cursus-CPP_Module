#include "Character.hpp"

Character::Character()
: _name("default name")
{
	int idx;

	std::cout << "Character Default constructor called" << std::endl;
	while (idx < 4)
	{
		this->_inventory[idx] = NULL;
		idx++;
	}
}

Character::Character(std::string name)
: _name(name)
{
	int idx;

	std::cout << "Character Name constructor called" << std::endl;
	while (idx < 4)
	{
		this->_inventory[idx] = NULL;
		idx++;
	}
}

Character::Character(const Character& copy)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = copy;
}

Character::~Character()
{
	int idx;

	std::cout << "Character Destructor called" << std::endl;
	idx = 0;
	while (idx < 4)
	{
		if (this->_inventory[idx])
			delete this->_inventory[idx];
		idx++;
	}
}

Character& Character::operator=(const Character& character)
{
	int idx;

	idx = 0;
	std::cout << "Character Assignation operator called" << std::endl;
	this->_name = character._name;
	while (idx < 4)
	{
		if (this->_inventory[idx])
		{
			delete this->_inventory[idx];
			this->_inventory[idx] = NULL;
		}
		idx++;
	}
	idx = 0;
	while (idx < 4 && character._inventory[idx])
	{
		this->_inventory[idx] = character._inventory[idx]->clone();
		idx++;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int idx;

	idx = 0;
	while (idx < 4)
	{
		if (!this->_inventory[idx])
		{
			this->_inventory[idx] = m;
			break ;
		}
		idx++;
	}
}

void Character::unequip(int idx)
{
	int i;

	i = 0;
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		return ;
	this->_inventory[idx] = NULL;
	while (i < 4)
	{
		if (!this->_inventory[i] && i < 3)
		{
			this->_inventory[i] = this->_inventory[i + 1];
			this->_inventory[i + 1] = NULL;
		}
		i++;
	}
}

void Character::use(int idx, ICharacter& target)
{
	AMateria* temp;

	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		return ;
	}
	temp = this->_inventory[idx];
	temp->use(target);
}
