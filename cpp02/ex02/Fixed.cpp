/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:11:19 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 11:37:20 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::_pointPos = 8;

/*_______________________constructors_____________________________*/

Fixed::Fixed() : _fpValue(0) {
}

Fixed::Fixed(const int toFixed) {
    this->_fpValue = roundf(toFixed * (1 << _pointPos));
}

Fixed::Fixed(const float toFixed) {
    this->_fpValue = roundf(toFixed * (1 << _pointPos));
}

Fixed::Fixed(const Fixed& original) {
    *this = original;
}

Fixed::~Fixed() {
}

/*_______________________operators________________________________*/

Fixed &Fixed::operator=(Fixed const &value) {
    this->_fpValue = value.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed  &fixed) {
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator<(const Fixed &other) const {
    return (this->_fpValue < other._fpValue);
}

bool Fixed::operator>(const Fixed &other) const {
    return (this->_fpValue > other._fpValue);
}

bool Fixed::operator>=(const Fixed &other) const {
    return (this->_fpValue >= other._fpValue);
}

bool Fixed::operator<=(const Fixed &other) const {
    return (this->_fpValue >= other._fpValue);
}

bool Fixed::operator==(const Fixed &other) const {
    return (this->_fpValue == other._fpValue);
}

bool Fixed::operator!=(const Fixed &other) const {
    return (this->_fpValue != other._fpValue);
}

int Fixed::operator+(const Fixed &other) const {
    return (this->_fpValue + other._fpValue);
}

int Fixed::operator-(const Fixed &other) const {
    return (this->_fpValue - other._fpValue);
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result._fpValue = (this->_fpValue * other._fpValue) >> _pointPos;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;
    result._fpValue = (this->_fpValue << _pointPos) / other._fpValue;
    return result;
}

// Pre-increment: ++a
Fixed &Fixed::operator++() {
    ++_fpValue; // Increment the raw fixed-point value
    return (*this);  // Return the current object
}

// Post-increment: a++
Fixed Fixed::operator++(int) {
    Fixed tmp = *this; // Save the current state
    ++_fpValue;         // Increment the raw value
    return (tmp);        // Return the original object
}

// Pre-decrement: --a
Fixed &Fixed::operator--() {
    --_fpValue; // Decrement the raw fixed-point value
    return (*this);  // Return the current object
}

// Post-decrement: a--
Fixed Fixed::operator--(int) {
    Fixed tmp = *this; // Save the current state
    --_fpValue;         // Decrement the raw value
    return (tmp);        // Return the original object
}



/*_________________________utils__fn_______________________________*/

int Fixed::getRawBits( void ) const {
    return (this->_fpValue);
}

void Fixed::setRawBits( int const raw ) {
    this->_fpValue = raw;
}

int	    Fixed::toInt( void ) const {
    return(static_cast<float>(this->_fpValue) / (1 << _pointPos));
}

float	Fixed::toFloat( void ) const {
    return (static_cast<float>(this->_fpValue) / (1 << _pointPos));
}

/*__________________________comp__fn_______________________________*/


const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
