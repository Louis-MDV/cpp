#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>
#include "../Colors.hpp"

class Span {

    private:
        std::vector<int> _vec;
        size_t           _max;

    public:
        Span();
        Span(size_t N);
        Span&   operator=(const Span& src);
        Span(const Span& src);
        ~Span();

        template <typename InputIterator> void addNumbers(InputIterator begin, InputIterator end) {
            size_t rangeSize = std::distance(begin, end);
            if (_vec.size() + rangeSize > _max) {
                throw std::runtime_error("Adding this range exceeds the maximum size of Span.");
            }
            _vec.insert(_vec.end(), begin, end);
        }

        void    addNumber(int num);
        int     shortestSpan();
        int     longestSpan();   
        void    print() const;
        class   spanFull : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class   spanTooSmall : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class   idxOutBounds : public std::exception{
			public :
				virtual const char *what() const throw();
		};
};
