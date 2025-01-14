/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:48:26 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/17 18:47:19 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongCat.hpp"

//default constructor
WrongCat::WrongCat() {
    _type = "[WrongCat] black WrongCat";
    std::cout << "* [WrongCat] Default constructor called: " << GREEN << _type << RESET << " animal created!" << std::endl;
}

//copy constructor
WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
    std::cout << "* [WrongCat] Copy constructor called" << std::endl;
}

//assingment operator
WrongCat& WrongCat::operator=(const WrongCat& src) {
    std::cout << "* [WrongCat] Assignement operator called" << std::endl;
    this->_type = src._type;
    return (*this);
}

//destructor
WrongCat::~WrongCat() {
    std::cout << "* [WrongCat] Destructor called" << std::endl;
}

void    WrongCat::makeSound() {
    std::cout << "[WrongCat] wrong meow" << std::endl;
}
