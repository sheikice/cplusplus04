#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;
	protected:
		std::string	_type;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat&);
		const Cat& operator=(const Cat&);
		const Cat& operator=(Cat&);
		virtual void	makeSound(void) const;
};

#endif
