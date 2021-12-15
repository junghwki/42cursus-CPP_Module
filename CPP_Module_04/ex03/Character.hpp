#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* _inventory[4];
public:
	Character();
	~Character();
	Character(const Character& copy);
	Character(std::string name);
	Character& operator=(const Character& character);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif