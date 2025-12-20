#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual const std::string& getName() const = 0;
		virtual void setName(const std::string&) = 0;
		virtual const AMateria* getMateria(int) const = 0;
		virtual void equip(AMateria*) = 0;
		virtual void unequip(int) = 0;
		virtual void use(int, ICharacter&) = 0;
};

#endif
