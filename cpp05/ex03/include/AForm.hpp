#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

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
        class ExecGradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        bool           beSigned(Bureaucrat& form);
        void           signForm(Bureaucrat& form);
        int            getSignGrade() const;
        int            getExecGrade() const;
        int            getStatus() const;
        std::string    getName() const;
        virtual void executeAction() const = 0;             //pure virtual function defined in derived classes with executable
        void execute(Bureaucrat const &executor) const;     //non-pure virutal func that checks validation

};

std::ostream& operator<<(std::ostream& out, const Form& form);
