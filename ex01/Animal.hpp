#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(const std::string&);
		virtual ~Animal(void);
		Animal(const Animal&);
		const Animal& operator=(const Animal&);
		virtual void	makeSound(void) const;
		const std::string&	getType(void) const;
};

#endif
