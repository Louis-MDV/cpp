#include "Bureaucrat.hpp"

void checkGrade(int grade) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(int grade, std::string const name) : _name(name), _grade(grade) {
	checkGrade(grade);
	std::cout << GREEN << "Bureaucrat " << BOLD << _name << RESET << GREEN<< " created, aged: " << BOLD << _grade << std::endl << RESET;
}

Bureaucrat::~Bureaucrat()	throw() {
	std::cout << RED << "Bureaucrat destroyed\n" << RESET;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high\n ");
}


const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low\n ");
}

std::string	Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade(void) const{
	return _grade;
}

void	Bureaucrat::incr(void) {
	this->_grade--;
	checkGrade(this->_grade);
}

void	Bureaucrat::decr(void) {
	this->_grade++;
	checkGrade(this->_grade);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}
