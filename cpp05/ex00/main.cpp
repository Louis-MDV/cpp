
#include "Bureaucrat.hpp"

int main() {
/*****************BASIC*****************/
std::cout << "\nBasic ************************************\n";
    try{
        Bureaucrat eugene(1,"Eugene");
        std::cout << eugene << std::endl;
        eugene.decr();
        eugene.decr();
        std::cout << eugene << std::endl;
		eugene.incr();
        std::cout << eugene << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }
/*****************GRADE TO HIGH*****************/
std::cout << "\nGrade to High ************************************\n";
    try{
        Bureaucrat eugene(0,"Eugene");
        std::cout << eugene << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << RED << e.what() << RESET << std::endl<< std::endl;
    }

/*****************GRADE TO LOW*****************/
std::cout << "\nGrade to Low ************************************\n";

    try{
        Bureaucrat eugene(151,"Eugene");
        std::cout << eugene << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BLUE << e.what() << RESET << std::endl<< std::endl;
    }
std::cout << "\nDecr to Low ************************************\n";
/*****************DECREMENTE TO LOW*****************/
    try{
        Bureaucrat eugene(150,"Eugene");
        std::cout << eugene << std::endl;
        eugene.decr();
        std::cout << eugene << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BLUE << e.what() << RESET << std::endl<< std::endl;
    }
/*****************INCREMENTE TO HIGH*****************/
std::cout << "\nDecr to High ************************************\n";
    try{
        Bureaucrat eugene(1,"Eugene");
        std::cout << eugene << std::endl;
        eugene.incr();
    }
    catch (std::exception & e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    
}