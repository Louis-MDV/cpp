#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main() {

    std::cout << BOLD+ITALIC+"      TEST: creation vector and span calculation"+RESET<<std::endl;
    srand(static_cast<unsigned int>(time(0)));
    try {
        int size = 3;
        Span sp(size); // Create a Span object with a maximum capacity of size
        
        for (int i = 0; i < size; ++i) {
            sp.addNumber(rand());
        }
        sp.print();

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout <<  BOLD+ITALIC+"\n      TEST: creation vector from range of iterators"+RESET <<std::endl;
    Span sp2(9);

    std::vector<int> numbers; //creation of numbers vector and adding nums
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(rand());
    }
    try {
        sp2.addNumbers(numbers.begin(), numbers.end());
        sp2.print();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
