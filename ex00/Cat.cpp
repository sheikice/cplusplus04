#include <iostream>
#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	_type = "Cat";
	std::cout << "\033[1;32m"
		<< "Cat is constructed."
		<< "\033[0m" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "\033[1;31m"
		<< "Cat is destroyed."
		<< "\033[0m" << std::endl;
}

Cat::Cat(const Cat& other): Animal()
{
	std::cout << "\033[1;32m"
		<< "Cat is copy-constructed."
		<< "\033[0m" << std::endl;
	Animal::_type = other._type;
}

const Cat& Cat::operator=(const Cat& other)
{
	std::cout << "\033[1;29m"
		<< "Cat is assigned."
		<< "\033[0m" << std::endl;
	if (this != &other)
		Animal::_type = other._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miou" << std::endl;
}
