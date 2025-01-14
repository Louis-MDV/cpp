
#include "include/Bureaucrat.hpp"
#include "include/AForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/Intern.hpp"
#include "../Colors.hpp"

int main() {
std::cout << BLUE+"\nIntern ************************************\n"+RESET;
    try {
        Intern  someRandomIntern;
        Form*   a;
        Form*   b;
        Form*   c;
        Form*   d;

        a = someRandomIntern.makeForm("robotomy request", "machine");
        b = someRandomIntern.makeForm("presidential pardon", "Clinton");
        c = someRandomIntern.makeForm("shrubbery creation", "Home");
        d = someRandomIntern.makeForm("doesn't exist", "okay");

        if (a)
            delete a;
        if (b)
            delete b;
        if (c)
            delete c;
        if (d)
            delete d;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl << std::endl;
    }
    return 0;
}
