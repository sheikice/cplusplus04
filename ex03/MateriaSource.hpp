#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

class AMateria;

class MateriaSource: public IMateriaSource
{
	private:
		static const int	_NBR_SLOTS = 4;
		AMateria* _slot[_NBR_SLOTS];

	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource&);
		const MateriaSource& operator=(const MateriaSource&);

		void learnMateria(AMateria*);
		AMateria* createMateria(const std::string&);
		const AMateria* getMateria(int) const;
};

#endif
