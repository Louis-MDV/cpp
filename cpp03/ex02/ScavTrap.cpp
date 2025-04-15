/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:31:49 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/28 11:35:02 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << GREEN << "* [ScavTrap] Derived class default constructor called." << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << GREEN << "* [ScavTrap] Derived class constructor called. Created " << ITALIC << BOLD << _Name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    std::cout << YELLOW << "* [ScavTrap] Copy constructor called." << RESET << std::endl;
}

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
    std::cout << RED << "[🛡️ GuardGate]" << RESET << _Name << " ScavTrap is now in Gate keeper mode." << std::endl << std::endl;
}
