
#include "include/AMateria.hpp"

//default constructor
AMateria::AMateria(void): _type("undefined materia") {
}

//constructor
AMateria::AMateria(const std::string &type) : _type(type) {
}

//copy constructor
AMateria::AMateria(const AMateria& src) : _type(src._type) { 
}

//assignement operator
AMateria&    AMateria::operator=(const AMateria& src) {
    if (this != &src) {
        this->_type = src._type;
    }
    return(*this);
}

//destructor
AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
    return (this->_type);
}

void AMateria::use(ICharacter& target) {
    (void)target;
}