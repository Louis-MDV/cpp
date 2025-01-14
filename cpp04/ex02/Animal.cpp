/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:36 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/29 13:02:52 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Brain.hpp"

//default constructor
AAnimal::AAnimal() {
    _type = "Classic";
    std::cout << GREEN << "* [Animal] Default constructor called: " << ITALIC << BOLD << _type << RESET << GREEN << " animal created!" << RESET << std::endl;
}

//constructor
AAnimal::AAnimal(std::string type) : _type(type) {
    std::cout << "* [Animal] Constructor called" << std::endl;
}

//copy constructor
AAnimal::AAnimal(const AAnimal& src) : _type(src._type) {
    std::cout << "* [Animal] Copy constructor called" << std::endl;
}

//assingment operator
AAnimal& AAnimal::operator=(const AAnimal& src) {
    if (this != &src) {
        std::cout << "* [Animal] Assignement operator called" << std::endl;
        this->_type = src._type;
    }
    return (*this);
}

//destructor
AAnimal::~AAnimal() {
    std::cout << RED << "* [Animal] Destructor called" << RESET << std::endl;
}

void    AAnimal::makeSound() const {
    std::cout << "[Animal] weird noise" << std::endl;
}

std::string AAnimal::getType() const {
    return _type;
}

void    AAnimal::setType(std::string type) {
    this->_type = type;
}
