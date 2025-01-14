#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm(target, 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const {
    return (_target);
}

void PresidentialPardonForm::executeAction() const {
    std::cout << this->getTarget() <<  " has been pardoned by Zaphod Beeblebrox\n\n";
}
