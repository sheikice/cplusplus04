#include <iostream>
#include "Animal.hpp"

Animal::Animal(void): _type("Meta") {}

Animal::~Animal(void) {}

Animal::Animal(const Animal& other): _type(other._type) {}

const Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Meta sound" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return (_type);
}
