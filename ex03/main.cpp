#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "\n";
	{
		ICharacter* sephiroth = new Character("Sephiroth");
		ICharacter* tifa = new Character("Tifa");

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());

		AMateria* m1 = src->createMateria("ice");
		AMateria* m2 = src->createMateria("cure");

		AMateria* m3 = src->createMateria("ice");
		AMateria* m4 = src->createMateria("ice");
		AMateria* m5 = src->createMateria("ice");
		AMateria* m6 = src->createMateria("ice");
		AMateria* m7 = src->createMateria("ice");

		std::cout << "\n";
		tifa->equip(m1);
		tifa->equip(m2);
		tifa->equip(NULL);
		sephiroth->equip(m3);
		sephiroth->equip(m4);
		sephiroth->equip(m5);
		sephiroth->equip(m6);
		sephiroth->equip(m7);

		ICharacter* cloud = new Character(*(static_cast<Character*>(sephiroth)));
		cloud->setName("Cloud");

		cloud->use(-1, *sephiroth);
		cloud->use(0, *sephiroth);
		cloud->use(4, *sephiroth);
		sephiroth->use(0, *cloud);
		tifa->use(1, *cloud);

		const AMateria *tmp = cloud->getMateria(0);
		cloud->unequip(-1);
		cloud->unequip(0);
		cloud->unequip(4);
		delete sephiroth;
		delete cloud;
		delete tifa;
		delete tmp;
		delete src;
		delete m7;

		std::cout << "\n";
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << "\n";
	return (0);
}
