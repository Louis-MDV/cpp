/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:31:49 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/28 11:33:57 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Default constructor
ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << GREEN << "* [ScavTrap] Derived class default constructor called." << RESET << std::endl;
}

//constructor
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
    std::cout << GREEN << "* [ScavTrap] Derived class constructor called. Created " << ITALIC << BOLD << _Name << RESET << std::endl;
}

//copy constructor
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    std::cout << YELLOW << "* [ScavTrap] Copy constructor called." << RESET << std::endl;
}

//assignment operator
ScavTrap&   ScavTrap::operator=(const ScavTrap& src) {
	if (this != &src) {
		std::cout << BLUE << "* [ScavTrap] Operator assignement called." << RESET << std::endl;
		this->_Name = src._Name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
    return (*this);
}

//destructor
ScavTrap::~ScavTrap() {
    std::cout << RED << "* [ScavTrap] Derived class destructor called. " << ITALIC << BOLD << _Name << RESET << RED << " was destroyed correctly" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (checkPowerLevel())
    {
        std::cout << RED << "[💣 ATTACK]" << RESET << " ScavTrap " << GREEN << this->_Name << RESET << " attacks, " << RED << target << RESET << " causing " << this->_attackDamage << " points of damage!";
        this->_energyPoints--;
        this->status();
    }
    else
        return ;
}

void ScavTrap::guardGate(){
    std::cout << RED << "[🛡️ GuardGate] " << RESET << GREEN << _Name << RESET << " ScavTrap is now in Gate keeper mode." << std::endl << std::endl;
}
