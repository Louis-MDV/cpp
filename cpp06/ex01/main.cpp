#include "Serializer.hpp"

int main(int ac, char **av) {

    if (ac != 3) {
        std::cout << "error: wrong num of args\n Please execute with 2 int parameters.\n";
        return 1;
    }

    Data *test = new Data(); // Allocate memory for the Data structure

    // Convert command-line arguments to integers using std::istringstream
    std::istringstream iss1(av[1]);
    std::istringstream iss2(av[2]);
    iss1 >> test->value;
    iss2 >> test->anotherValue;

    // Serialize the address of the Data object
    uintptr_t uint = Serializer::serialize(test);

    // Deserialize the uintptr_t back to a Data* pointer
    Data* data_ptr = Serializer::deserialize(uint);

    // Print the values to verify correctness
    std::cout << data_ptr->value << std::endl;
    std::cout << data_ptr->anotherValue << std::endl;

    // Free the allocated memory
    delete test;

    return 0;
}
