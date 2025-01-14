#include "../include/AForm.hpp"
#include "../include/Intern.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"


Intern::Intern(void) {}

Intern::Intern(std::string formName, std::string target) : _formName(formName), _target(target) {}

Intern::~Intern() {}

// enum FormType {
//     PresidentialPardon,
//     RobotomyRequest,
//     ShrubberyCreation,
//     InvalidForm
// };

// std::string formTypeToString(FormType type) {
//     if (type >= 0 && type < InvalidForm) {
//         return nameList[type];
//     }
//     return "Invalid Form";
// }

// FormType stringToFormType(const std::string& name) {
//     for (size_t i = 0; i < sizeof(nameList) / sizeof(nameList[0]); ++i) {
//         if (nameList[i] == name) {
//             return static_cast<FormType>(i);
//         }
//     }
//     return InvalidForm;
// }

// Factory function to create forms

Form* Intern::makeForm(const std::string& formName, const std::string& target) {
    

    const std::string nameList[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    int indx = 100;

    for (int i = 0; i <= 3; ++i) {
        if (nameList[i] == formName || i == 3) {
            indx = i;
            break;
        }
    }
    if (indx != 3)
        std::cout << GREEN+"Intern creates "+BOLD << target <<RESET+ "\n";
    switch (indx) {
        case 0:
            return new PresidentialPardonForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
        default:
            std::cout << RED+"error: "+BOLD;
            throw std::invalid_argument("Form name not recognized");
            std::cout << RESET;
    }
}
