/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:38 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/29 13:03:23 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"
#include "include/Brain.hpp"

//default constructor
Cat::Cat() : _Brain(new Brain()) {
    _type = "[🐱 Cat] BLACK CAT";
    std::cout << YELLOW << "* [🐱 Cat] Default constructor called. Created a " << BOLD << ITALIC << _type << RESET << std::endl;
}

//constructor
Cat::Cat(const std::string &type) : AAnimal(type), _Brain(new Brain()) {
    std::cout << YELLOW << "* [🐱 Cat] Constructor called. Created a" << BOLD << ITALIC << type << RESET << std::endl;
}

//copy constructor
Cat::Cat(const Cat& src) : AAnimal(src), _Brain(new Brain(*src._Brain)) {
    std::cout << YELLOW << "* [🐱 Cat] Copy constructor called" << RESET << std::endl;
}

//assingment operator
Cat& Cat::operator=(const Cat& src) {
    if (this != &src) {
        std::cout << "* [🐱 Cat] Assignement operator called" << std::endl;
        this->_type = src._type;
        delete this->_Brain;
        this->_Brain = new Brain(*src._Brain);
    }
    return (*this);
}

//destructor
Cat::~Cat() {
    delete _Brain;
    std::cout << RED << "* [🐱 Cat] Destructor called" << RESET << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "[🐱 Cat] meow" << std::endl;
}
