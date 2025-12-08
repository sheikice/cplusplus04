#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	{
		const int ANIMAL_NBR = 6;
		const Animal* horde[ANIMAL_NBR];
		Animal* animal2;


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
			if (i < ANIMAL_NBR / 2)
				animal2 = new Dog(*(static_cast<const Dog*>(horde[i])));
			else
				animal2 = new Cat(*(static_cast<const Cat*>(horde[i])));
			std::cout <<  animal2->getType() << " does ";
			animal2->makeSound();
			delete horde[i];
			delete animal2;
		}
	}
	{
		const Animal* dog = new Dog();
		dog->makeSound();
		delete dog;
	}
	return (0);
}
