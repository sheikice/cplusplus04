#include "Brain.hpp"

Brain::Brain(void) {}

Brain::~Brain(void) {}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < _IDEAS_NUMBER; i++)
		_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
		for (int i = 0; i < _IDEAS_NUMBER; i++)
			_ideas[i] = other._ideas[i];
	return (*this);
}
