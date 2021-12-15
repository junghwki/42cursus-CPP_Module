#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& wronganimal);
	WrongAnimal& operator= (const WrongAnimal& wronganimal);
	std::string getType() const;
	void makeSound() const;
};

#endif