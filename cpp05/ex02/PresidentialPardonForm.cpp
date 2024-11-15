#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm(target, 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const {
    return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    std::cout << this->getTarget() <<  " has been pardoned by Zaphod Beeblebrox\n";
}
