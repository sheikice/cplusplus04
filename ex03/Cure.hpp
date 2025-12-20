#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure&);
		const Cure& operator=(const Cure&);

		AMateria* clone() const;
		void use(ICharacter&) const;
};

#endif
