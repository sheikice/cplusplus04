#include <iostream>
#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	_brain = new Brain();
	std::cout << "\033[1;32m"
		<< "Dog is constructed."
		<< "\033[0m" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "\033[1;31m"
		<< "Dog is destroyed."
		<< "\033[0m" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	_brain = new Brain(*other._brain);
	std::cout << "\033[1;32m"
		<< "Dog is copy-constructed."
		<< "\033[0m" << std::endl;
}

const Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		delete _brain;
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	std::cout << "\033[1;29m"
		<< "Dog is assigned."
		<< "\033[0m" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
