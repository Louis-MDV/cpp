#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm(target, 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

std::string ShrubberyCreationForm::getTarget() const {
    return (_target);
}

void   ShrubberyCreationForm::executeAction() const {

    std::ofstream   file;
    std::string     filename = this->getTarget()+"_shrubbery";

    file.open(filename);

    if (!file.is_open()) {
        std::cerr << GREEN+BOLD+"[ExecuteAction failure]"+RESET << "    Failed to open or create the file." << std::endl;
        return ;
    }
    file << "       ccee88oo\n";
    file << "  C8O8O8Q8PoOb o8oo\n";
    file << " dOB69QO8PdUOpugoO9bD\n";
    file << "CgggbU8OU qOp qOdoUOdcb\n";
    file << "    6OuU  /p u gcoUodpP\n";
    file << "      \\\\//  /douUP\n";
    file << "        |||\\\\//\\\\\n";
    file << "        |||||||||\n";
    file << "        |||||||||\n";
    file << "        |||||||||\n";
    file << "  .....//|||||||\\\\....\n";

    file.close();
    std::cout << GREEN+BOLD+"[ExecuteAction success]:"+RESET << " Shrubbery created at " << ITALIC + this->getTarget() <<"_shrubbery\n\n"+RESET << std::endl;
}
