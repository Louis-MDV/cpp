/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:48:23 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 11:56:33 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"

//default constructor
WrongAnimal::WrongAnimal() {
    _type = "Classic";
    std::cout << "* [WrongAnimal] Default constructor called: " << GREEN << _type << RESET << " WrongAnimal created!" << std::endl;
}

//constructor
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "* [WrongAnimal] Constructor called" << std::endl;
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src._type) {
    std::cout << "* [WrongAnimal] Copy constructor called" << std::endl;
}

//assingment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
    std::cout << "* [WrongAnimal] Assignement operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}

//destructor
WrongAnimal::~WrongAnimal() {
    std::cout << "* [WrongAnimal] Destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const {
    std::cout << "[Animal] weird noise" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}
