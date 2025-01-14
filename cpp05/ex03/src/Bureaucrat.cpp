#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

void    checkGrade(int grade, int min, int max) {
    if (grade < min) {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > max) {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(int grade, std::string const name) : _name(name), _grade(grade) {
	checkGrade(grade, 1, 150);
}

Bureaucrat::~Bureaucrat() throw() {
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    std::cout << RED+BOLD+"[Error]: "+RED;
    return ("Grade too high\n ");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    std::cout << RED+BOLD+"[Error]: "+RED;
    return ("Grade too low\n ");
}

std::string	Bureaucrat::getName(void) const{
	return _name;
}

int Bureaucrat::getGrade(void) const{
	return _grade;
}

void	Bureaucrat::incr(void) {
	_grade--;
	checkGrade(_grade, 1, 150);
}

void	Bureaucrat::decr(void) {
	_grade++;
	checkGrade(_grade, 1, 150);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << YELLOW+BOLD+"[Bureacrat info]\n"+RESET<<" *" << BOLD << bureaucrat.getName() << RESET << ", bureaucrat grade " << BOLD << bureaucrat.getGrade() << RESET << std::endl;
	return out;
}

void Bureaucrat::executeForm(Form const & form) {
        try {
            form.execute(*this);
            std::cout <<GREEN+BOLD+"[Bureaucrat Exec success]: "+RESET+GREEN+this->getName() << " executed " << form.getName() << std::endl;
        } catch (const std::exception &e) {
            std::cerr << RED+BOLD+"[Bureaucrat Exec failure]: "+RESET+GREEN+this->getName() << " could not execute " << form.getName() << ": " << e.what() << std::endl;
        }
}
