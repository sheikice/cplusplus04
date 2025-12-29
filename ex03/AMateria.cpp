#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(void): _type("") {}

AMateria::AMateria(const std::string& type): _type(type) {}

AMateria::~AMateria(void) {}

AMateria::AMateria(const AMateria& other): _type(other._type) {}

const AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		setType(other.getType());
	return (*this);
}

const std::string& AMateria::getType() const
{
	return (_type);
}

void AMateria::setType(const std::string& type)
{
	_type = type;
}

void AMateria::use(ICharacter& character)
{
	std::cout << "* tries to use its abstract materia on "
		<<  character.getName()
		<< " but it resulted in a fart. *\n";
}
