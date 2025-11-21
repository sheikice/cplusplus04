#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"

class Dog: public Animal
{
	protected:
		std::string	_type;
	public:
		Dog(void);
		virtual ~Dog(void);
		Dog(const Dog&);
		const Dog& operator=(const Dog&);
		virtual void	makeSound(void) const;
};

#endif
