/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:11:19 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 10:33:05 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::_pointPos = 8;

/*_______________________constructors_____________________________*/
Fixed::Fixed() : _fpValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int toFixed) {
    std::cout << "Int constructor called" << std::endl;
    this->_fpValue = roundf(toFixed * (1 << _pointPos));
}

Fixed::Fixed(const float toFixed) {
    std::cout << "Float constructor called" << std::endl;
    this->_fpValue = roundf(toFixed * (1 << _pointPos));
}

Fixed::Fixed(const Fixed& original) {
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

/*_______________________opertators________________________________*/

Fixed &Fixed::operator=(Fixed const &value) {
    std::cout << "Copy assignment operator called" <<std::endl;
    this->_fpValue = value.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed  &fixed) {
	os << fixed.toFloat();
	return (os);
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
