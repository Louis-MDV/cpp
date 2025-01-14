#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public Form {

    private:
        std::string _target;
    public:
        PresidentialPardonForm(std::string const &target);
	    ~PresidentialPardonForm();
        void executeAction() const;
        std::string getTarget() const;

};
