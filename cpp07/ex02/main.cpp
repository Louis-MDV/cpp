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
            std::cout << std::endl;

        // Test exception
            try {
                std::cout << ITALIC+"Access idx 10 in intArray : "+RESET << intArray[10] << std::endl;
            } catch (const Array<int>::IdxOutBounds& e) {
                std::cerr << e.what();
            }

        // Create and test CHAR
            Array<char> charArray(5);
            for (std::size_t i = 0; i < charArray.size(); i++) {
                charArray[i] = 'A' + i;
            }
            std::cout << ITALIC+"charArray : "+RESET;
            for (std::size_t i = 0; i < charArray.size(); i++) {
                std::cout << charArray[i] << " ";
            }
            std::cout << std::endl;

        // Test deep copy
            Array<int> intArrayCopy = intArray;  // Utilisation du constructeur de copie profonde
            intArray[0] = 999; // Modification de intArray sans affecter intArrayCopy
            std::cout << "intArray content after modification : ";
            for (std::size_t i = 0; i < intArray.size(); i++) {
                std::cout << intArray[i] << " ";
            }
            std::cout << std::endl;

            std::cout << "intArray content after modification shouldnt change : ";
            for (std::size_t i = 0; i < intArrayCopy.size(); i++) {
                std::cout << intArrayCopy[i] << " ";
            }
            std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "unexpected error : " << e.what() << std::endl;
    }
    return 0;
}
