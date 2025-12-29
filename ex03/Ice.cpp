#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(void): AMateria("ice") {}

Ice::~Ice(void) {}

Ice::Ice(const Ice& other): AMateria(other.getType()) {}

const Ice& Ice::operator=(const Ice& other)
{
	(void) other;
	return (*this);
}

void Ice::use(ICharacter& character)
{
	std::cout << "* shoots an ice bolt at "
		<< character.getName() << " *\n";
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

