#include "ScalarConverter.hpp"
#include <limits>
#include <sstream>
#include<iomanip>
#include <cstdlib>

//canoncal form
ScalarConverter::ScalarConverter() {};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &src){
    (void)src;
    return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
    *this = src;
}

ScalarConverter::~ScalarConverter() {};

//special value handling
bool ScalarConverter::isSpecialValue(const std::string &inputValue) {
    return (inputValue == "+inf" || inputValue == "-inf" || inputValue == "nan" ||
            inputValue == "+inff" || inputValue == "-inff" || inputValue == "nanf");
}

void    display_inf_plus() {
    std::cout << "char: impossible\nint: impossible\nfloat: inff\ndouble: inf" << std::endl;
}

void    display_inf_moins() {
    std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
}

void    display_nan() {
    std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
}

//convert function
void ScalarConverter::convert(const std::string& literal) {

    ScalarConverter converter; //instance of ScalarConverter class, can use non static

    if (converter.isSpecialValue(literal)) {
        if (literal == "+inf" || literal == "+inff")
            return (display_inf_plus());
        else if (literal == "-inf" || literal == "-inff")
            return (display_inf_moins());
        else
            return (display_nan());
    }
    std::istringstream iss(literal);
    if (converter.isChar(literal)) {
        char charValue = literal[0];
        converter.printValue(charValue);
    }
    else if (converter.isInteger(literal)) {
        int intValue;
        iss >> intValue;
        converter.printValue(intValue);
    }
    else if (converter.isFloat(literal)) {
        float floatValue;
        iss >> floatValue;
        converter.printValue(floatValue);
    }
    else if (converter.isDouble(literal)) {
        double doubleValue;
        iss >> doubleValue;
        converter.printValue(doubleValue);
    }
    else {
        std::cout << "invalid literal\n";
    }
}

template <typename T, typename U>
bool ScalarConverter::checkOverflowPrint(T value) {
    if (value > std::numeric_limits<U>::max() || 
        (std::numeric_limits<U>::is_integer && value < std::numeric_limits<U>::min()) || 
        (!std::numeric_limits<U>::is_integer && value < -std::numeric_limits<U>::max())) {
        std::cout << RED << "Overflow detected from type: " << BOLD << typeid(T).name() << RESET << std::endl;
        return true;
    } else {
        return false;
    }
}

//HELPER functions to check type of input
bool ScalarConverter::isInteger(const std::string& str) {

    if (str.empty() || (!std::isdigit(str[0]) && str[0] != '-' && str[0] != '+')) {
        return false;
    }
    for (size_t i = 1; i < str.length(); ++i) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    char* end;
    long value = std::strtol(str.c_str(), &end, 10);
    return (*end == '\0' && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max());
}

bool ScalarConverter::isFloat(const std::string& str) {
    bool hasDecimal = false;
    int  indx = 0;
    if (str.empty() || (!std::isdigit(str[0]) && str[0] != '-' && str[0] != '+')) {
        return false;
    }
    for (size_t i = 1; i < str.length(); ++i) {
        if (str[i] == '.') {
            if (hasDecimal == true) {
                return false;
            }
            hasDecimal = true;
        }
        else if (!std::isdigit(str[i]) && str[i] != 'f') {
            return false;
        }
        indx++;
    }
    if (str[indx] != 'f')
        return false;
    return hasDecimal;
}

bool ScalarConverter::isDouble(const std::string &str){
    if (str.length() < 2 || str.find('.') == std::string::npos) 
        return false;
    char *endptr;
    for (size_t index = 0; index < str.length(); ++index) {
        if (!std::isdigit(str[index]) && str[index] != '.' && str[index] != '-' && str[index] != '+') {
            return false; 
        }
    }
    std::strtod(str.c_str(), &endptr);
    return (*endptr == '\0');
}

bool ScalarConverter::isChar(const std::string& str) {
    if (str.length() == 1 && std::isprint(str[0]) && !isdigit(str[0]))
        return true;
    else
        return false;
}

//functoin to print
template <typename T>
void ScalarConverter::printValue(T value) {

    // std::cout << GREEN << "input type: " << typeid(T).name() << RESET << std::endl;

    std::cout << BOLD << "char: " << RESET;
    if (!checkOverflowPrint<T, char>(value))
        std::cout << (std::isprint(static_cast<char>(value)) ? std::string("'") + static_cast<char>(value) + "'" : "Non displayable") << std::endl;
    
    std::cout << BOLD << "int: " << RESET;
    if (!checkOverflowPrint<T, int>(value))
        std::cout << static_cast<int>(value) << std::endl;
    
    std::cout << BOLD << "float: " << RESET;
    if (!checkOverflowPrint<T, float>(value))
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    
    std::cout << BOLD << "double: " << RESET;
    if (!checkOverflowPrint<T, double>(value))
        std::cout << static_cast<double>(value) << std::endl;
}
