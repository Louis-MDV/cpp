#pragma once
#include <string>
#include <iostream>

template<typename T> T const &max(T const &a, T const &b) {
	
    if (a > b) {
		return (a);
	} else {
        return (b);
    }
}

template<typename T> T const &min(T const &a, T const &b) {
	
    if (a < b) {
		return (a);
	} else {
        return (b);
    }
}

template<typename T> void swap(T &x, T &y) {

	T swap = x;

	x = y;
	y = swap;
}
