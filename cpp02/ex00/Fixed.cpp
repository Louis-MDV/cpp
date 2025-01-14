/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:11:19 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/03 15:25:09 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor
Fixed::Fixed() : _fpValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed& original) {
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

//destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//assignment operator
Fixed& Fixed::operator=(Fixed const &value) {
    std::cout << "Copy assignment operator called" <<std::endl;
    this->_fpValue = value.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" <<std::endl;
    return (this->_fpValue);
} 

void Fixed::setRawBits(int const raw) {
    this->_fpValue = raw;
}
