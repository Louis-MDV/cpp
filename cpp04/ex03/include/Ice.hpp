#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
    
    protected:
        std::string   _type;
    public:
        Ice();
        Ice(const std::string &type);
        Ice(const Ice& src);
        Ice& operator=(const Ice& src);
        ~Ice();
        
        Ice*   clone() const;
        void    use(ICharacter& target);
};
