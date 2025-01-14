
#include "include/MateriaSource.hpp"
#include <iomanip>

int MateriaSource::_count = 0;

//default constructor
MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        materiaTab[i] = NULL;
}

//copy constructor
MateriaSource::MateriaSource(const MateriaSource& src) {
    *this = src;
}

//assignement operator
MateriaSource&  MateriaSource::operator=(const MateriaSource& src) {

    if (this != &src) {
        for (int i = 0; this->materiaTab[i]; ++i) {
            delete (this->materiaTab[i]);
            this->materiaTab[i] = NULL;
        }
        for (int i = 0; this->materiaTab[i]; ++i) {
            if (src.materiaTab[i])
                this->materiaTab[i] = src.materiaTab[i]->clone();
            else
                this->materiaTab[i] = NULL;
        }
    }
    this->_count = src._count;
    return(*this);
}

//destructor
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        if(materiaTab[i] != NULL)
            delete materiaTab[i];
    }
}

void    MateriaSource::learnMateria(AMateria* newMateria) {

    for(int i = 0; i < 4; ++i) { 
        if (_count < 4 && this->materiaTab[_count] == NULL && newMateria) {
			std::cout << BOLD << RED << newMateria->getType() << RESET << " added to slot " << BOLD << RED << _count << RESET << " of learned materias\n";
			this->materiaTab[_count] = newMateria;
			_count++;
			return ;
    	}
	}
	delete newMateria;
	std::cerr <<RED+ "Inventory learned materia full\n" +RESET;
}

AMateria*   MateriaSource::createMateria(std::string const & type) {
    
    if (type != "cure" && type != "ice") {
        std::cout << RED << "Unkown materia type. Cannot be created.\n";
        return (0);
    }
    for (int i = 0; i < _count; ++i) {
		if (type == materiaTab[i]->getType()) {
            return (materiaTab[i]);
        }
    }
    return (0);
}
