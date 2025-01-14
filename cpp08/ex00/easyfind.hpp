#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm> // For std::find
#include <stdexcept> // For std::runtime_error

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    // Use std::find to find the first occurrence of the value
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Value not found in the container");
    }
    return it;
}
