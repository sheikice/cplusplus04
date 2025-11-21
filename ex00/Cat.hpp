#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

class Cat: public Animal
{
	protected:
		std::string	_type;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat&);
		const Cat& operator=(const Cat&);
		virtual void	makeSound(void) const;
};

#endif
