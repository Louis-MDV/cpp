#include "ScalarConverter.hpp"

template<typename T>
void showMinMax() {
   std::cout << " min: " << std::numeric_limits<T>::min() << std::endl;
   std::cout << "         max: " << std::numeric_limits<T>::max() << std::endl;
   std::cout << std::endl;
}

int main(int ac, char **av) {

    // std::cout << ITALIC+YELLOW+"[char] " << RESET;
    // showMinMax<unsigned char>();
    std::cout << ITALIC+MAGENTA+"[int] " << RESET;
    showMinMax<int>();
    std::cout << ITALIC+CYAN+"[float] " << RESET;
    showMinMax<float>();
    std::cout << ITALIC+BLUE+"[double] " << RESET;
    showMinMax<double>();

    if (ac != 2) {
        std::cout << RED << "error: wrong num of args\n";
        return (0);
    }

    std::cout << BOLD+UNDERLINE+"\nOUTPUT:\n"+RESET;
    ScalarConverter::convert(av[1]);
    std::cout << "\n";
}
