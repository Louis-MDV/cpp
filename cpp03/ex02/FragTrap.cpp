/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:45:08 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/28 11:34:42 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//default constructor
FragTrap::FragTrap() {
    std::cout << GREEN << "* [FragTrap] Default constructor called. Created: " << ITALIC << BOLD << _Name << RESET << std::endl;
};

//constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << GREEN << "* [FragTrap] constructor called. " << ITALIC << BOLD << _Name << RESET << GREEN << " FragTrap created." << RESET << std::endl;
}

//copy constructor
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
    std::cout << "* [FragTrap] copy constructor called. " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {

	if (this != &src) {
		std::cout << "* [FragTrap] ClapTrap: Copy assignement constructor called." << std::endl;
		this->_Name = src._Name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage  =src._attackDamage;
	}
    return (*this);
}

//destructor
FragTrap::~FragTrap() {
    std::cout << RED << "* [FragTrap] Destructor called. " << ITALIC << BOLD << _Name << RESET << RED << " was destroyed correctly." << RESET << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << BOLD << YELLOW << "[👏 HighFive] " << _Name << " requestes a positive highfive!" << RESET << std::endl << std::endl;
}

