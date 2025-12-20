#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice&);
		const Ice& operator=(const Ice&);

		AMateria* clone() const;
		void use(ICharacter&) const;
};

#endif
