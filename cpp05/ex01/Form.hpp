#pragma once

#include "Bureaucrat.hpp"

class Form {

	private:
    	std::string const	_name;
    	bool				_sign_status;
    	int const			_sign_grade;
		int const			_exec_grade;
    public:
        Form(std::string const name, int sign_grade, int exec_grade);
        virtual ~Form();
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        void           beSigned(Bureaucrat& form);
        void           signForm(Bureaucrat& form);
        int            getSignGrade() const;
        int            getExecGrade() const;
        int            getStatus() const;
        std::string    getName() const;

};

std::ostream& operator<<(std::ostream& out, const Form& form);
