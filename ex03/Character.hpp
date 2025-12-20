#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class Character: public ICharacter
{
	private:
		static const int	_NBR_SLOTS = 4;
		std::string	_name;
		AMateria*	_slot[_NBR_SLOTS];

	public:
		Character(void);
		Character(const std::string&);
		~Character(void);
		Character(const Character&);
		const Character& operator=(const Character&);

		const std::string& getName() const;
		const AMateria* getMateria(int) const;
		void setName(const std::string&);
		void equip(AMateria*);
		void unequip(int);
		void use(int, ICharacter&);
};

#endif
