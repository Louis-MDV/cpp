#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
    protected:
        std::string   _type;
    public:
        Cure();
        Cure(const std::string &type);
        Cure(const Cure& src);
        Cure& operator=(const Cure& src);
        ~Cure();

        Cure*   clone() const;
        void    use(ICharacter& target);
};
