#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource(void): IMateriaSource()
{
	for (int i = 0; i < _NBR_SLOTS; i++)
		_slot[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < _NBR_SLOTS; i++)
	{
		delete _slot[i];
		_slot[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other): IMateriaSource()
{
	for (int i = 0; i < _NBR_SLOTS; i++)
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
		else
			_slot[i] = NULL;
}

const MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
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

const AMateria* MateriaSource::getMateria(int idx) const
{
	if (idx < _NBR_SLOTS && idx >= 0)
		return (_slot[idx]);
	std::cout << "index: " << idx << " is invalid.\n";
	return (NULL);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	if (m == NULL)
		return ;
	while (i < _NBR_SLOTS && _slot[i])
		i++;
	if (i < _NBR_SLOTS && _slot[i] == NULL)
		_slot[i] = m->clone();
	else
		std::cout <<  "Source's slots are already filled.\n";
	delete m;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	int	i = 0;

	while (i < _NBR_SLOTS && type != _slot[i]->getType())
		i++;
	if (i < _NBR_SLOTS)
		return (_slot[i]->clone());
	return (NULL);
}
