#include <iostream>
#include "Animal.hpp"

Animal::Animal(void): _type("Meta")
{
	std::cout << "\033[1;32m"
		<< "Animal is constructed."
		<< "\033[0m" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "\033[1;31m"
		<< "Animal is destroyed."
		<< "\033[0m" << std::endl;
}

Animal::Animal(const Animal& other): _type(other._type)
{
	std::cout << "\033[1;32m"
		<< "Animal is copy-constructed."
		<< "\033[0m" << std::endl;
}

const Animal& Animal::operator=(const Animal& other)
{
	std::cout << "\033[1;29m"
		<< "Animal is assigned."
		<< "\033[0m" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return (_type);
}
