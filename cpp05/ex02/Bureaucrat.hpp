#pragma once
#include <string>
#include <iostream>

const std::string RESET = "\033[0m";
const std::string UNDERLINE = "\033[4m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string ITALIC = "\033[3m";
const std::string BOLD = "\033[1m";

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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);
void checkGrade(int grade, int min, int max);
