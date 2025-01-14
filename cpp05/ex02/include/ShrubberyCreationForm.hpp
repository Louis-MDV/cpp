#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

    private:
        std::string _target;
    public:
        ShrubberyCreationForm(std::string const &target);
        ~ShrubberyCreationForm();
        void   executeAction() const;
        std::string getTarget() const;
};
