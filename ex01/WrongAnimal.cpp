#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("Meta")
{
	std::cout << "\033[1;32m"
		<< "WrongAnimal is constructed."
		<< "\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[1;31m"
		<< "WrongAnimal is destroyed."
		<< "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): _type(other._type)
{
	std::cout << "\033[1;32m"
		<< "WrongAnimal is copy-constructed."
		<< "\033[0m" << std::endl;
}

const WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "\033[1;29m"
		<< "WrongAnimal is assigned."
		<< "\033[0m" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (_type);
}
