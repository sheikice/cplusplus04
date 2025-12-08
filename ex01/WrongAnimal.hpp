
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		const WrongAnimal& operator=(const WrongAnimal&);
		void	makeSound(void) const;
		const std::string&	getType(void) const;
};

#endif
