#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    private:
        std::string _target;
        mutable bool _executionToggle;
    public:
        RobotomyRequestForm(std::string const &target);
        ~RobotomyRequestForm();
        void   executeAction() const;
        std::string getTarget() const;
};
