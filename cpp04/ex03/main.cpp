
#include "include/AMateria.hpp"
#include "include/Cure.hpp"
#include "include/Ice.hpp"
#include "include/Character.hpp"
#include "include/MateriaSource.hpp"

/*______________________MANDITORY______________________*/
int main() {

    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
	 tmp = src->createMateria("ice");
    me->equip(tmp);
	 tmp = src->createMateria("ice");
    me->equip(tmp);
	me->unequip(2);
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);


    delete bob;
    delete me;
    delete src;

    return 0;
}
