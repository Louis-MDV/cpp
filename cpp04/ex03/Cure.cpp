
#include "include/Cure.hpp"

//default constructor
Cure::Cure() : AMateria("cure") {
}

//constructor
Cure::Cure(const std::string &type) : AMateria(type) {
}

//copy constructor
Cure::Cure(const Cure& src) : AMateria(src._type) { 
}

//assignement operator
Cure&	Cure::operator=(const Cure& src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return(*this);
}

//destructor
Cure::~Cure() {
}

Cure*   Cure::clone() const {
	return (new Cure(this->getType()));       //creates and allocates a copy of this current Cure Obj
}

void    Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
