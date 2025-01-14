#include "Base.hpp"

int main() {

    Base test;

    A a;
    B b;
    C c;

    Base* basePtrA = &a;
    Base* basePtrB = &b;
    Base* basePtrC = &c;

    std::cout << ITALIC + "Using pointers: \n" + RESET;
    test.identify(basePtrA); // Should print "A"
    test.identify(basePtrC); // Should print "C"
    test.identify(basePtrB); // Should print "B"
    test.identify(basePtrC); // Should print "C"

    std::cout << ITALIC + "Using addresses: \n" + RESET;
    test.identify(a); // Should print "A"
    test.identify(b); // Should print "B"
    test.identify(c); // Should print "C"
    test.identify(a); // Should print "A"
    test.identify(c); // Should print "C"


    return 0;
}