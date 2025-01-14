
#include "include/Ice.hpp"

//default constructor
Ice::Ice() : AMateria("ice") {
}

//constructor
Ice::Ice(const std::string &type) : AMateria(type) {
}

//copy constructor
Ice::Ice(const Ice& src) : AMateria(src._type) { 
}

//assignement operator
Ice&	Ice::operator=(const Ice& src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return(*this);
}

//destructor
Ice::~Ice() {
}


//clone function
Ice*    Ice::clone() const {
	return (new Ice(this->getType()));
}

void    Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
