/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:42 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/29 13:01:18 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"

//default constructor
Dog::Dog() : Animal("Dog") {
    std::cout << GREEN << "* [🐶 Dog] Default constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//constructor
Dog::Dog(std::string type) : Animal(type) {
    std::cout << GREEN << "* [🐶 Dog] Constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//copy constructor
Dog::Dog(const Dog& src) : Animal(src) {
    std::cout << YELLOW << "* [🐶 Dog] Copy constructor called" << RESET << std::endl;
}

//assignment operator
Dog& Dog::operator=(const Dog& src) {
    if (this != &src) {
        std::cout << BLUE << "* [🐶 Dog] Assignment operator called" << RESET << std::endl;
        this->_type = src._type;
    }
    return (*this);
}

//destructor
Dog::~Dog() {
    std::cout << RED << "* [🐶 Dog] Destructor called. " << ITALIC << BOLD << _type << " destroyed correclty!" << RESET << std::endl;
}

void    Dog::makeSound() const {
    std::cout << "[🐶 Dog] wof wof" << std::endl;
}