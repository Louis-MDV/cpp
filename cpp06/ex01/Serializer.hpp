#pragma once
#include <string>
#include <iostream>
#include "Data.hpp"
#include <sstream>
#include "../Colors.hpp"

typedef unsigned long *uintptr_t;

class Serializer {
    private:
        Serializer(); // Private constructor to prevent instantiation
        Serializer(const Serializer& other); // Private copy constructor to prevent copy instantiation
        Serializer &operator=(const Serializer& other); // Private assignment operator to prevent assignment
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr); // serialize Data* ptr to uintptr_t
        static Data* deserialize(uintptr_t raw);//deserialize uintptr_t to Data* ptr
};