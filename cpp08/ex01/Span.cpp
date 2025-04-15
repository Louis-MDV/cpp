#include "Span.hpp"

/*********************SPAN CONSTRUCTORS**********************/

Span::Span() {}
Span::~Span() {}
Span::Span(size_t N) : _max(N) {
    std::vector<int> vec;
}
Span::Span(const Span& src) : _vec(src._vec), _max(src._max) {}
Span& Span::operator=(const Span& src) {
    if (this != &src) {
        this->_max = src._max;
        this->_vec = src._vec;
    }
    return (*this);
}

/*********************FUNCTIONS**********************/

void Span::addNumber(int num) {
    if (_vec.size() >= _max) {
        throw Span::spanFull(); // Exception if the vector is already full
    }
    _vec.push_back(num); // Add the number to the vector
}

void Span::print() const {
    for (size_t i = 0; i < _vec.size(); ++i) {
        std::cout << _vec[i] << std::endl;
    }
    std::cout << std::endl;
}

/*********************SPAN CALCULATION**********************/

int Span::shortestSpan() {

    if (_vec.size() < 2) {
        std::cout << RED+"The vector does not have enough elements to find the min span."+RESET << std::endl;
        throw Span::spanTooSmall();
    }
    std::vector<int> sortedVec = _vec;

    std::sort(sortedVec.begin(), sortedVec.end());
    int distance = 0;
    int shortest = INT_MAX;

    for (unsigned int i = 0; i < sortedVec.size()-1; ++i){
        distance = sortedVec[i+1] - sortedVec[i];
        if (distance < shortest && distance >= 0)
            shortest = distance;
    }
    std::cout << ITALIC+"\nShortest span: "+RESET;
    return shortest;
}

int Span::longestSpan() {

    if (_vec.size() < 2) {
        std::cerr << RED+"The vector does not have enough elements to find the longest span."+RESET << std::endl;
        throw Span::spanTooSmall();
    }
    
    std::vector<int> sortedVec = _vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    std::cout << ITALIC+"Longest span: "+RESET;
    return sortedVec.back() - sortedVec.front();
}

/*********************EXCEPTION FUNCTIONS**********************/

const char* Span::spanFull::what() const throw() {
    return ("Error: Span Full. No more space for an extra num.\n ");
}

const char* Span::spanTooSmall::what() const throw() {
    return ("Error: Span too small.\n ");
}

const char* Span::idxOutBounds::what() const throw() {
    return ("Error : Index is out of bounds\n");
}
