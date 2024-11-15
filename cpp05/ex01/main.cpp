
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
std::cout << "\nBasic ************************************\n";
    try{
        Bureaucrat  jack(11,"Jack");
        Form        check("10dollar", 13, 10);

        std::cout << check << std::endl;
        std::cout << jack << std::endl;
        jack.decr();
        jack.decr();
        std::cout << jack << std::endl;
		jack.incr();
        std::cout << jack << std::endl;
        check.beSigned(jack);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }

std::cout << "\nGrade too High ************************************\n";
    try{
        Bureaucrat  jack(1,"Jack");
        Form        check("10dollar", 0, 10);

        std::cout << check << std::endl;
        std::cout << jack << std::endl;
        check.beSigned(jack);
    }
    catch (std::exception & e)
    {
        std::cout << RED << e.what() << RESET << std::endl<< std::endl;
    }

std::cout << "\nGrade too Low ************************************\n";

    try{
        Bureaucrat  jack(150, "Jack");
        Form        check("10dollar", 151, 10);

        std::cout << check << std::endl;
        std::cout << jack << std::endl;
        check.beSigned(jack);
    }
    catch (std::exception & e)
    {
        std::cout << BLUE << e.what() << RESET << std::endl<< std::endl;
    }    
}
