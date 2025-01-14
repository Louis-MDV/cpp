#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, 72, 45), _target(target), _executionToggle(true) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const {
    return (_target);
}

void   RobotomyRequestForm::executeAction() const {

    std::cout <<BOLD << RED <<  "* Makes some drilling noises...🎶🎵\n" << RESET;
    if (_executionToggle) {
        std::cout << GREEN+BOLD+"[ExecuteAction success]: "+RESET << GREEN << this->getTarget() << " has been robotomized successfully\n\n" << RESET;
    } else {
        std::cout << RED+BOLD+"[ExecuteAction failure]: "+RESET << RED << this->getTarget() << "'s robotomization has failed\n\n" << RESET;
    }
    _executionToggle = !_executionToggle;
}
