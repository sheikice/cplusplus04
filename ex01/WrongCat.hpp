#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat&);
		const WrongCat& operator=(const WrongCat&);
		virtual void	makeSound(void) const;
};

#endif
