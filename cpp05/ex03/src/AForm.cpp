#include "../include/AForm.hpp"

Form::Form(std::string const name, int grade, int exec_grade) : _name(name), _sign_status(false), _sign_grade(grade), _exec_grade(exec_grade) {
	checkGrade(_sign_grade, 1, 150);
}

const char* Form::GradeTooHighException::what() const throw() {
    std::cout << RED+BOLD+"[Error]:  ";
	return ("Required signature grade too high\n ");
}

const char* Form::GradeTooLowException::what() const throw() {
    std::cout << RED+BOLD+"[Error]:  ";
	return ("Required signature grade too Low\n ");
}

const char* Form::ExecGradeTooLowException::what() const throw() {
    std::cout << RED+BOLD+"[Error]:  ";
    	return ("Required execution grade too Low\n ");
}

Form::~Form() {};

//sign if bureaucrat < form else GradeTooLow
bool Form::beSigned(Bureaucrat& form) {

	if (form.getGrade() <= this->getSignGrade()) {
		this->_sign_status = true;
		this->signForm(form);
        return true;
	}
	else {
		throw Form::GradeTooLowException();
	}
}

void Form::signForm(Bureaucrat& form) {

	if (this->getStatus() == false) {
		std::cout << RED+BOLD+"[Signature failure]: " << RESET<< form.getName() << " couldn't sign " << this->getName() << " because ";
		throw Form::GradeTooLowException();
	}
	else {
		std::cout << GREEN+BOLD+"[Signature success]:   " <<RESET+GREEN+form.getName() << " signed " << this->getName() + RESET<< std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << YELLOW+BOLD+"\n[Form info]\n"+RESET << BOLD+" *Form:		"+RESET << form.getName() << BOLD+"\n *SignGrade:	"+RESET << form.getSignGrade() << BOLD+"\n *Status:	"+RESET << form.getStatus() << BOLD+"\n *ExecGrade:	"+RESET << form.getExecGrade() << std::endl;
	return out;
}

int Form::getSignGrade(void) const {
	return (this->_sign_grade);
}

int Form::getExecGrade(void) const {
	return (this->_exec_grade);
}

int Form::getStatus(void) const {
	return (this->_sign_status);
}

std::string Form::getName(void) const {
	return (this->_name);
}

void Form::execute(Bureaucrat const &executor) const {
    if (_sign_status == false) {
        throw std::runtime_error("Form is not signed.");
    }
    if (executor.getGrade() > getExecGrade()) {
        throw ExecGradeTooLowException();
    }
    executeAction();
}