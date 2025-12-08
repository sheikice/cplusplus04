#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "\033[1;32m"
		<< "WrongCat is constructed."
		<< "\033[0m" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\033[1;31m"
		<< "WrongCat is destroyed."
		<< "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal()
{
	std::cout << "\033[1;32m"
		<< "WrongCat is copy-constructed."
		<< "\033[0m" << std::endl;
	WrongAnimal::_type = other._type;
}

const WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "\033[1;29m"
		<< "WrongCat is assigned."
		<< "\033[0m" << std::endl;
	if (this != &other)
		WrongAnimal::_type = other._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miou" << std::endl;
}
