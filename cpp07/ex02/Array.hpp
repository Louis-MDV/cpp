#pragma once
#include <string>
#include <iostream>
#include <functional>
#include "../Colors.hpp"

template <typename T> class Array {

    private:
        T       *_elements; //points to an array of T elements init to 0
        size_t  _n;
    public:
        Array() : _elements(new T[0]) {}
        Array(unsigned int n) : _elements(new T[n]), _n(n) {}
        Array(const Array& src) : _elements(new T[src._n]), _n(src._n) {
            for (std::size_t i = 0; i < _n; i++) {
				_elements[i] = src._elements[i];
			}
        }
        Array& operator=(const Array& src) {
            if (this != &src) {
                this->_n = src._n;
                delete[]_elements;
                this->_elements = new T(src._n); //allocate mem and init to 0
                for (int i = 0; i < src._n; ++i) {
                    this->_elements[i] = src._elements[i]; // Copy elements
                }
            }
            return (*this);
        }
	    T& operator[](std::size_t idx){
			if(idx >= _n)
				throw(IdxOutBounds());
			return(_elements[idx]);
		}
        class IdxOutBounds : public std::exception{
			public :
				virtual const char *what() const throw(){
					return ("Error : Index is out of bounds\n");
				}
		};
        std::size_t size() const {
            return this->_n;
        }
        ~Array() {
            delete[] this->_elements;
        }
};
