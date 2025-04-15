#include "Array.hpp"

int main() {
    try {
        // Create and test INT
            Array<int> intArray(5);
            for (std::size_t i = 0; i < intArray.size(); i++) {
                intArray[i] = i * 10;
            }
            std::cout << ITALIC +"intArray : "+RESET;
            for (std::size_t i = 0; i < intArray.size(); i++) {
                std::cout << intArray[i] << " ";
            }
            std::cout << "\n-------\n";

        // Test exception
            try {
                std::cout << ITALIC+"Access idx 10 in intArray : "+RESET << intArray[10] << std::endl;
            } catch (const Array<int>::IdxOutBounds& e) {
                std::cerr << e.what();
            }
            std::cout << "-------\n";

        // Create and test CHAR
            Array<char> charArray(5);
            for (std::size_t i = 0; i < charArray.size(); i++) {
                charArray[i] = 'A' + i;
            }
            std::cout << ITALIC+"charArray : "+RESET;
            for (std::size_t i = 0; i < charArray.size(); i++) {
                std::cout << charArray[i] << " ";
            }
            std::cout << "\n-------\n";

        // Test deep copy
            Array<int> intArrayCopy = intArray;  // using deep copy constructor
            intArray[0] = 100;
            std::cout << "intArray content : ";
            for (std::size_t i = 0; i < intArray.size(); i++) {
                std::cout << intArray[i] << " ";
            }
            std::cout << std::endl;

            std::cout << "intArrayCopy content : ";
            for (std::size_t i = 0; i < intArrayCopy.size(); i++) {
                std::cout << intArrayCopy[i] << " ";
            }
            std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "unexpected error : " << e.what() << std::endl;
    }
    return 0;
}
