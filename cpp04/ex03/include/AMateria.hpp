#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

const std::string RESET = "\033[0m";
const std::string UNDERLINE = "\033[4m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string ITALIC = "\033[3m";
const std::string BOLD = "\033[1m";

class ICharacter;

//base abstract class AMateria (has at least 1 pure virtual function)
class AMateria {

    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(const std::string &type);
        AMateria(const AMateria &src);
        AMateria& operator=(const AMateria& src);
        virtual ~AMateria();

        std::string const & getType() const; //Returns the materia type

        virtual AMateria* clone() const = 0; //declared as pure virtual function

        virtual void use(ICharacter& target);
};
