#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	{
		ICharacter* bobby = new Character("bobby");
		ICharacter* john = new Character("john");

		AMateria* m1 = new Ice;
		AMateria* m2 = new Cure;

		std::cout << "\n";
		// ================== TESTS =========================

		bobby->equip(m1);
		bobby->equip(m2);
		bobby->use(0, *john);
		bobby->use(1, *john);
		bobby->use(2, *john);

		ICharacter* test = new Character(*(static_cast<Character*>(bobby)));

		test->use(0, *bobby);
		test->use(1, *bobby);
		test->use(2, *bobby);

		const AMateria *tmp = test->getMateria(0);
		test->unequip(0);
		delete bobby;
		delete test;
		delete john;
		delete tmp;

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
	return (0);
}
