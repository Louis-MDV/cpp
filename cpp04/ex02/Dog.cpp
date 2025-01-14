/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:42 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/25 13:02:57 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"
#include "include/Brain.hpp"

//default constructor
Dog::Dog() : _Brain(new Brain()) {
    _type = "[🐶 Dog] BULLDOG";
    std::cout << BLUE << "* [🐶 Dog] Default constructor called. Created a " << BOLD << ITALIC << _type << RESET << std::endl;
}

Dog::Dog(const std::string &type) : AAnimal(type), _Brain(new Brain()) {
    std::cout << BLUE << "* [🐶 Dog] Constructor called. Created a " << BOLD << ITALIC << type << RESET << std::endl;
}

//copy constructor
Dog::Dog(const Dog& src) : AAnimal(src), _Brain(new Brain(*src._Brain)) {
    std::cout << BLUE << "* [🐶 Dog] Copy constructor called" << RESET << std::endl;
}

//assignment operator
Dog& Dog::operator=(const Dog& src) {
    if (this != &src) {
        std::cout << BLUE << "* [🐶 Dog] Assignement operator called" << RESET << std::endl;
        this->_type = src._type;
        delete this->_Brain;
        this->_Brain = new Brain(*src._Brain);
    }
    return (*this);
}

//destructor
Dog::~Dog() {
    delete _Brain;
    std::cout << RED << "* [🐶 Dog] Destructor called" << RESET << std::endl;
}

void    Dog::makeSound() const {
    std::cout << "[🐶 Dog] wof wof" << std::endl;
}
