/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:48:23 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 11:50:37 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"

//default constructor
WrongAnimal::WrongAnimal() : _type("Wrong Animal") {
    std::cout << GREEN << "* [WrongAnimal] Default constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//constructor
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << GREEN << "* [WrongAnimal] Constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src._type) {
    std::cout << YELLOW << "* [WrongAnimal] Copy constructor called" << RESET << std::endl;
}

//assingment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
    std::cout << BLUE << "* [WrongAnimal] Assignement operator called" << RESET << std::endl;
    this->_type = src._type;
    return (*this);
}

//destructor
WrongAnimal::~WrongAnimal() {
    std::cout << RED << "* [WrongAnimal] Destructor called. " << ITALIC << BOLD << _type << " destroyed correclty!" << RESET << std::endl;
}

void    WrongAnimal::makeSound() const {
    std::cout << "[WrongAnimal] weird noise" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}
