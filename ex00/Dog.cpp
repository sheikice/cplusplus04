#include <iostream>
#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "\033[1;32m"
		<< "Dog is constructed."
		<< "\033[0m" << std::endl;
	_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "\033[1;31m"
		<< "Dog is destroyed."
		<< "\033[0m" << std::endl;
}

Dog::Dog(const Dog& other): Animal()
{
	std::cout << "\033[1;32m"
		<< "Dog is copy-constructed."
		<< "\033[0m" << std::endl;
	_type = other._type;
}

const Dog& Dog::operator=(const Dog& other)
{
	std::cout << "\033[1;29m"
		<< "Dog is assigned."
		<< "\033[0m" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
