
#include "include/Character.hpp"
#include <iomanip>

//default constructor
Character::Character(void) : _name("undefined character"), _unequip(NULL) {

    for (int i = 0; i < 4; ++i)
        _equipped[i] = NULL;
}

//constructor
Character::Character(const std::string &name) : _name(name), _unequip(NULL) {

    for (int i = 0; i < 4; ++i)
        _equipped[i] = NULL;
}

//copy constructor
Character::Character(const Character& src) {

    for (int i = 0; i < 4; ++i) {
        if (src._equipped[i])
            this->_equipped[i] = src._equipped[i]->clone();
        else
            this->_equipped[i] = NULL;
    }
    this->_name = src._name;
    this->_unequip = src._unequip;
}

//assignement operator
Character&  Character::operator=(const Character& src) {

    if (this != &src) {
        for (int i = 0; this->_equipped[i]; ++i) {
            delete this->_equipped[i];
            this->_equipped[i] = NULL;
        }
        for (int i = 0; this->_equipped[i]; ++i) {
            if (src._equipped[i])
                this->_equipped[i] = src._equipped[i]->clone();
            else
                this->_equipped[i] = NULL;
        }
        this->_name = src._name;
        this->_unequip = src._unequip;
    }
    return(*this);
}

//destructor
Character::~Character() {
    
    for (int i = 0; i < 4; ++i) {
        if(this->_equipped[i] != NULL){
			delete this->_equipped[i];
        this->_equipped[i] = NULL;
		}
    }
}

/*______________________________INTERFACE_FUNCTIONS______________________________*/

std::string const & Character::getName() const {
    return (this->_name);
}

void Character::equip(AMateria* m) {

    if (m == NULL) {
        std::cerr << "Error: Null pointer passed to equip" << std::endl;
        return;
    }
    for (int i = 0; i < 4; ++i) {
		if (_equipped[i] == NULL) {
			_equipped[i] = m->clone();
			std::cout << GREEN << "     [equip] Added a new " << m->getType() << " to slot " << i << RESET << std::endl;
			return ;
		}
    }
    std::cout << RED << "[error] All 4 inventory slots are full." << RESET << std::endl;
}

void Character::unequip(int idx) {

    if (this->_equipped[idx] == NULL)
	    std::cout << "[unequip] " << this->_name << " has nothing to unequip at index " << idx << std::endl;
    else {
		this->_unequip = _equipped[idx];
	    std::cout << this->_name << " unequipped " << _unequip->getType() << std::endl;
		if (this->_unequip)
            delete (this->_unequip);
		this->_equipped[idx] = NULL;
       
    }
}

void Character::use(int idx, ICharacter& target) {
    if (_equipped[0] == NULL) {
        std::cout << RED + "You need to learn a materia before you can use one.\n" + RESET;
        return ;
    }
    if (idx < 0 || idx >= 4) {
        std::cout << RED + "Index out of range\n" + RESET;
        return ;
    }
    if (_equipped[idx] == NULL) {
    	std::cout << "[use] " << BOLD << this->_name << RESET << " has no source at index" << idx  << std::endl;
        return ;
    }
    else
        _equipped[idx]->use(target);
}
