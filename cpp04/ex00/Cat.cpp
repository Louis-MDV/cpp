/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:38 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/29 13:01:23 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"

//default constructor
Cat::Cat() : Animal("Cat"){
    std::cout << GREEN << "* [🐱 Cat] Default constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//constructor
Cat::Cat(std::string type) : Animal(type) {
    std::cout << GREEN << "* [🐱 Cat] Constructor called: " << ITALIC << BOLD << _type << " animal created!" << RESET << std::endl;
}

//copy constructor
Cat::Cat(const Cat& src) : Animal(src) {
    std::cout << YELLOW << "* [🐱 Cat] Copy constructor called" << RESET << std::endl;
}

//assingment operator
Cat& Cat::operator=(const Cat& src) {
    if (this != &src) {
        std::cout << BLUE << "* [🐱 Cat] Assignment operator called" << RESET << std::endl;
        this->_type = src._type;
    }
    return (*this);
}

//destructor
Cat::~Cat() {
    std::cout << RED << "* [🐱 Cat] Destructor called. " << ITALIC << BOLD << _type << " destroyed correclty!" << RESET << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "[🐱 Cat] meow" << std::endl;
}
