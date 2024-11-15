#pragma once

#include "Bureaucrat.hpp"

class AForm {

	private:
    	std::string const	_name;
    	bool				_sign_status;
    	int const			_sign_grade;
		int const			_exec_grade;
    protected:
        virtual void   execute(Bureaucrat const & executor) const = 0;
    public:
        AForm(std::string const name, int sign_grade, int exec_grade);
        virtual ~AForm();
        // execute(Bureaucrat const & executor) const;
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

std::ostream& operator<<(std::ostream& out, const AForm& form);
