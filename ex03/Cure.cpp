#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure") {}

Cure::~Cure(void) {}

Cure::Cure(const Cure& other): AMateria(other.getType()) {}

const Cure& Cure::operator=(const Cure& other)
{
	(void) other;
	return (*this);
}

void Cure::use(ICharacter& character)
{
	std::cout <<"* heals " << character.getName() << "'s wounds *\n";
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

