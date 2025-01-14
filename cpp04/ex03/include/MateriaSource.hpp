#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;

//learns materias to use/equip/unequip them via a character
class MateriaSource : public IMateriaSource {

    protected:
        static int      _count;
    private:
        AMateria*       materiaTab[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& src);
        MateriaSource&  operator=(const MateriaSource& src);
        ~MateriaSource();

        void learnMateria(AMateria* newMateria);
        AMateria* createMateria(std::string const & type);
};
