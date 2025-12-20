#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(void): ICharacter(), _name("")
{
	for (int i = 0; i < _NBR_SLOTS; i++)
		_slot[i] = NULL;
}

Character::Character(const std::string& name): ICharacter(), _name(name)
{
	for (int i = 0; i < _NBR_SLOTS; i++)
		_slot[i] = NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < _NBR_SLOTS; i++)
	{
		delete _slot[i];
		_slot[i] = NULL;
	}
}

Character::Character(const Character& other): ICharacter(), _name(other.getName())
{
	for (int i = 0; i < _NBR_SLOTS; i++)
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
		else
		 _slot[i] = NULL;
}

const Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		setName(other.getName());
		for (int i = 0; i < _NBR_SLOTS; i++)
		{
			if (_slot[i])
			{
				delete _slot[i];
				_slot[i] = NULL;
			}
			if (other._slot[i])
				_slot[i] = other._slot[i]->clone();
		}

	}
	return (*this);
}

const AMateria* Character::getMateria(int idx) const
{
	if (idx < _NBR_SLOTS && idx >= 0)
		return (_slot[idx]);
	std::cout << "index: " << idx << " is invalid.\n";
	return (NULL);
}

const std::string& Character::getName() const
{
	return (_name);
}

void Character::setName(const std::string& name)
{
	_name = name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (_slot[i] && i < _NBR_SLOTS)
		i++;
	if (_slot[i] == NULL)
		_slot[i] = m;
	else
		std::cout << getName() << "'s inventory is already full.\n";

}

void Character::unequip(int idx)
{
	if (idx > _NBR_SLOTS)
		std::cout <<  "index > inventory size.\n";
	else
		_slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& character)
{
	if (idx > _NBR_SLOTS)
		std::cout << "idx > inventory size.\n";
	else if (_slot[idx] == NULL)
		std::cout << "No materia equipped on slot " << idx << ".\n";
	else
		_slot[idx]->use(character);
}

