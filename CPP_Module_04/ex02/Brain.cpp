#include "Brain.hpp"

Brain::Brain()
{
	int idx;

	idx = 0;
	std::cout << "Brain Default constructor called" << std::endl;
	while (idx < 100)
	{
		this->_ideas[idx] = "idea";
		idx++;
	}
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	int idx;

	idx = 0;
	std::cout << "Brain Assignation operator called" << std::endl;
	while (idx < 100)
	{
		this->_ideas[idx] = brain._ideas[idx];
		idx++;
	}
	return (*this);
}
