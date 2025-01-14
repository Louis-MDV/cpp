#pragma once
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;
class ICharacter;

//character equips, unequips and uses AMaterias from MateriaSource
class Character : public ICharacter {
    private:
        std::string     _name;
        AMateria*       _unequip;
        AMateria*       _equipped[4];

    public:
        Character(void);
        Character(const std::string &name);
        Character(const Character& src);
        Character&  operator=(const Character& src);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
