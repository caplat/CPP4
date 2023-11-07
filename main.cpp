#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    AMateria* t1;
    AMateria* t2;
    t1 = src->createMateria("ice");
    me->equip(t1);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    t2 = src->createMateria("ice");
    me->equip(t2);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    me->unequip(0);

    std::cout << std::endl;

    std::cout << "0 " << std::endl; me->use(0, *bob);
    std::cout << "1 " ; me->use(1, *bob);
    std::cout << "2 " ; me->use(2, *bob);
    std::cout << "3 " ; me->use(3, *bob);
    std::cout << "4"  ; me->use(4, *bob);

    std::cout << std::endl;
    me->equip(t1);
    std::cout << std::endl;
    me->use(0, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}