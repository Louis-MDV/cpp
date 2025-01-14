#pragma once
#include <string>
#include <iostream>
#include "../../Colors.hpp"
#include "AForm.hpp"

class Form;

class Intern {

    private:
        std::string const   _formName;
        std::string const   _target;
    public:
        Intern(void);
        Intern(std::string formName, std::string target);
        ~Intern();
        bool    nameCheck();
        Form*   makeForm(const std::string& formName, const std::string& target);
};


