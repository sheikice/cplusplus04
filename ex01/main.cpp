#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	const int ANIMAL_NBR = 10;
	const Animal* horde[ANIMAL_NBR];

	for (int i = 0; i < ANIMAL_NBR; i++)
	{
		if (i < ANIMAL_NBR / 2)
			horde[i] = new Dog;
		else
			horde[i] = new Cat;
	}
	for (int i = 0; i < ANIMAL_NBR; i++)
	{
		std::cout << horde[i]->getType() << " does ";
		horde[i]->makeSound();
		delete horde[i];
	}
	return (0);
}
