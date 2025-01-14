#include "Base.hpp"
#include <string>
#include <iostream>
#include <cstdlib> //rand() and srand()
#include <ctime>   // time()

Base::Base() {}
Base::~Base() {}

Base* Base::generate(void) {
    
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3; // Generate a random number between 0 and 2

    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

//identify the type of the object pointed to by a Base*
void Base::identify(Base* p) {
    if (p == NULL) {
        std::cout << "Null pointer" << std::endl;
        return;
    }
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

// Helper function to perform type checking
template <typename T>
bool isType(Base& p) {
    try {
        T& ref = dynamic_cast<T&>(p); //if p succesfuly casted to type T then p acctually points to obj of type T
        (void)ref;
        return true;
    } catch (...) {
        return false;
    }
}

// Identify the type of the object pointed to by a Base&
void Base::identify(Base& p) {
    if (isType<A>(p)) {
        std::cout << "A" << std::endl;
    } else if (isType<B>(p)) {
        std::cout << "B" << std::endl;
    } else if (isType<C>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}