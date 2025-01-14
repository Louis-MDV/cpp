#pragma once
#include <string>
#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {

    public:
        MutantStack() {}
        ~MutantStack() {}
        MutantStack(const MutantStack& src) : std::stack<T>(src) {};
        MutantStack& operator=(const MutantStack& src) {
            if (this != &src) {
                std::stack<T>::operator=(src);
			}
			return *this;
        }

        // Define iterator types based on the underlying container type
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
        typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

        // Provide begin and end iterators for normal iteration
        iterator begin() { return this->c.begin(); } // Accessing the underlying container
        iterator end() { return this->c.end(); }
        
        // Provide const iterators for read-only access
        const_iterator begin() const { return this->c.begin(); }
        const_iterator end() const { return this->c.end(); }
    
        // Provide reverse iterators for reverse iteration
        reverse_iterator rbegin() { return this->c.rbegin(); }
        reverse_iterator rend() { return this->c.rend(); }
        
        // Provide const reverse iterators
        const_reverse_iterator rbegin() const { return this->c.rbegin(); }
        const_reverse_iterator rend() const { return this->c.rend(); }
};
