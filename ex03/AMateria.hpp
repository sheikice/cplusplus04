#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;

//TODO: DONE
class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(const std::string&);
		virtual	~AMateria(void);
		AMateria(const AMateria&);
		const AMateria& operator=(const AMateria&);

		const std::string& getType() const;
		void setType(const std::string&);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter&) const;
};

#endif
