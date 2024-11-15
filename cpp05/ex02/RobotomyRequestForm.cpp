#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm(target, 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void   RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    static int i = 0;
    std::cout <<BOLD << RED <<  "<drilling noise>\n" << RESET;
    if (i % 2 == 0) {
        std::cout <<BOLD << GREEN << this->getTarget() << " has been robotomized successfully\n" << RESET;
    }
    else
        std::cout <<BOLD << RED << this->getTarget() << "'s robotomizatiom has failed\n" << RESET;
}