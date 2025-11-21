#include <iostream>
#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	_type = "Dog";
}

Dog::~Dog(void) {}

Dog::Dog(const Dog& other): Animal()
{
	_type = other._type;
}

const Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
