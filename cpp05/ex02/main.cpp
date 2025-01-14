
#include "include/Bureaucrat.hpp"
#include "include/AForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "../Colors.hpp"

int main() {

std::cout << BLUE+"\nRobotomyRequestForm ************************************\n"+RESET;
    try {
        Bureaucrat           jack(1, "Jack");
        RobotomyRequestForm  presForm("form1");

        std::cout << presForm << std::endl;
        std::cout << jack << std::endl;
        jack.decr();
        jack.decr();
        std::cout << jack << std::endl;
		jack.incr();
        std::cout << jack << std::endl;
        presForm.beSigned(jack);
        presForm.execute(jack);
        presForm.execute(jack);
        presForm.execute(jack);

    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl << std::endl;
    }

std::cout << BLUE+"\nShrubberyCreationForm ************************************\n"+RESET;
    try {
        Bureaucrat              fred(137, "Fred");
        ShrubberyCreationForm   tree("form2");

        std::cout << tree << std::endl;
        std::cout << fred << std::endl;

        tree.beSigned(fred);
        tree.execute(fred);
        tree.execute(fred);
        tree.execute(fred);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl << std::endl;
    }

std::cout << BLUE+"\nPresidentialPardonForm ************************************\n"+RESET;
    try {
        Bureaucrat              bob(1, "Gusto");
        PresidentialPardonForm  obama("form3");

        std::cout << obama << std::endl;
        std::cout << bob << std::endl;

        obama.beSigned(bob);
        obama.execute(bob);
        bob.executeForm(obama);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl << std::endl;
    }
}

//ShrubberyCreationForm: Required grades: sign 145, exec 137
//RobotomyRequestForm: Required grades: sign 72, exec 45
//PresidentialPardonForm: Required grades: sign 25, exec 5