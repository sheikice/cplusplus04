#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		static const int	_IDEAS_NUMBER = 100;
		std::string			_ideas[_IDEAS_NUMBER];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain&);
		Brain& operator=(const Brain&);
};

#endif

