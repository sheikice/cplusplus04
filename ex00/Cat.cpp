#include <iostream>
#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	_type = "Cat";
}

Cat::~Cat(void) {}

Cat::Cat(const Cat& other): Animal()
{
	_type = other._type;
}

const Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miou" << std::endl;
}
