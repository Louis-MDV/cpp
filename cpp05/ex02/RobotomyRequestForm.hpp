#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    private:
        std::string _target;
    public:
        RobotomyRequestForm(std::string const &target);
        ~RobotomyRequestForm();
        void   execute(Bureaucrat const & executor) const;
        std::string getTarget() const;
};
