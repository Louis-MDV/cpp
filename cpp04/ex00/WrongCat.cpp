/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:48:26 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 11:50:03 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongCat.hpp"

//default constructor
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << GREEN << "* [🐱 WrongCat] Default constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//constructor
WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << GREEN << "* [🐱 WrongCat] Constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//copy constructor
WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
    std::cout << YELLOW << "* [🐱 WrongCat] Copy constructor called" << RESET << std::endl;
}

//assignment operator
WrongCat& WrongCat::operator=(const WrongCat& src) {
    std::cout << BLUE << "* [🐱 WrongCat] Assignement operator called" << RESET << std::endl;
    this->_type = src._type;
    return (*this);
}

//destructor
WrongCat::~WrongCat() {
    std::cout << RED << "* [🐱 WrongCat] Destructor called. " << ITALIC << BOLD << _type << " destroyed correclty!" << RESET << std::endl;
}

void    WrongCat::makeSound() {
    std::cout << "[WrongCat] wrong meow" << std::endl;
}
