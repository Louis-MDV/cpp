#pragma once
#include <string>
#include <iostream>
#include "../Colors.hpp"
#include <typeinfo>
#include <limits>

class ScalarConverter {

    public: // access from anywhere
        static void convert(const std::string& literal); //static member func can only use static member func or var

    private: //accessible only by class
        ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &src);
        ScalarConverter(const ScalarConverter &src);
        ~ScalarConverter();

        bool isInteger(const std::string& str);
        bool isFloat(const std::string& str);
        bool isDouble(const std::string& str);
        bool isChar(const std::string& str);
        bool isSpecialValue(const std::string &inputValue);
        

        template <typename T, typename U> bool checkOverflowPrint(T value);
        template <typename T> void printValue(T Value);

};

float stringToFloat(const std::string& str);