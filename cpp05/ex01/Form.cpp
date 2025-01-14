#include "Form.hpp"

Form::Form(std::string const name, int grade, int exec_grade) : _name(name), _sign_status(false), _sign_grade(grade), _exec_grade(exec_grade) {
	checkGrade(_sign_grade);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Required signature grade too high\n ");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Required signature grade too Low\n ");
}

Form::~Form() {};

//sign if bureaucrat < form else GradeTooLow
void Form::beSigned(Bureaucrat& form) {

	if (form.getGrade() <= this->getSignGrade()) {
		this->_sign_status = true;
		this->signForm(form);
	}
	else {
		throw Form::GradeTooLowException();
	}
}

void Form::signForm(Bureaucrat& form) {

	if (this->getStatus() == false) {
		std::cout << form.getName() << " couldn't sign " << this->getName() << " because ";
		throw Form::GradeTooLowException();
	}
	else {
		std::cout << form.getName() << " signed " << this->getName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << BOLD+"\n *Form:		"+RESET << form.getName() << BOLD+"\n *SignGrade:	"+RESET << form.getSignGrade() << BOLD+"\n *Status:	"+RESET << form.getStatus() << BOLD+"\n *ExecGrade:	"+RESET << form.getExecGrade() << std::endl;
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
