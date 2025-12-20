#include <iostream>
#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
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

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "\033[1;32m"
		<< "Cat is copy-constructed."
		<< "\033[0m" << std::endl;
}

const Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::_type = other.getType();
	std::cout << "\033[1;29m"
		<< "Cat is assigned."
		<< "\033[0m" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miou\n";
}
