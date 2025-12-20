#include <iostream>
#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "\033[1;32m"
		<< "Dog is constructed."
		<< "\033[0m" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "\033[1;31m"
		<< "Dog is destroyed."
		<< "\033[0m" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "\033[1;32m"
		<< "Dog is copy-constructed."
		<< "\033[0m" << std::endl;
}

const Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		_type = other.getType();
	std::cout << "\033[1;29m"
		<< "Dog is assigned."
		<< "\033[0m" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof\n";
}
