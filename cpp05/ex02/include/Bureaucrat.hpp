#pragma once
#include <string>
#include <iostream>
#include "../../Colors.hpp"
#include "AForm.hpp"

class AForm;

class Bureaucrat {

    private:
        std::string const   _name;
        int                 _grade;
    public:
        Bureaucrat(int grade, std::string name);
        virtual ~Bureaucrat () throw();
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        std::string getName(void) const;
        int         getGrade(void) const;
        void        incr(void);
        void        decr(void);
        void        executeForm(AForm const & form);
};

void        checkGrade(int grade, int min, int max);
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);
