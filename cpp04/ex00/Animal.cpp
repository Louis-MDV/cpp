/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:36 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/29 13:01:26 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"

//default constructor
Animal::Animal() : _type("Classic") {
    std::cout << GREEN << "* [Animal] Default constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//constructor
Animal::Animal(std::string type) : _type(type) {
    std::cout << GREEN << "* [Animal] Constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//copy constructor
Animal::Animal(const Animal& src) : _type(src._type) {
    std::cout << YELLOW << "* [Animal] Copy constructor called" << RESET << std::endl;
}

//assingment operator
Animal& Animal::operator=(const Animal& src) {
    if (this != &src) {
		std::cout << BLUE << "* [Animal] Assignment operator called" << RESET << std::endl;
		this->_type = src._type;
	}
	return (*this);
}

//destructor
Animal::~Animal() {
    std::cout << RED << "* [Animal] Destructor called. " << ITALIC << BOLD << _type << " destroyed correclty!" << RESET << std::endl;
}

void    Animal::makeSound() const {
    std::cout << "[Animal] weird noise" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}
