/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:09:45 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/28 11:32:32 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*____________________constructors________________________*/

//default constructor
ClapTrap::ClapTrap() {
    std::cout << GREEN << "* [ClapTrap] Default constructor called here!" << RESET;
}

//secondary constructor
ClapTrap::ClapTrap(std::string Name) : _Name(Name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << GREEN << "* [ClapTrap] Constructor called here! Created: " << ITALIC << BOLD << _Name << std::endl << RESET;
}

//copy constructor
ClapTrap::ClapTrap(ClapTrap const &src) : _Name(src._Name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
    std::cout << YELLOW << "* [ClapTrap] Copy constructor called here!" << RESET << std::endl;
}

//asignment operator
ClapTrap& ClapTrap::operator=(ClapTrap const &src) {
	if (this != &src) {
		std::cout << BLUE << "* [ClapTrap] Operator assignement called." << RESET << std::endl;
		this->_Name = src._Name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
    return (*this);
}

//destructor
ClapTrap::~ClapTrap() {
    std::cout << RED << "* [ClapTrap] Destructor called here! " << BOLD << ITALIC << _Name << RESET << RED <<" was destroyed correclty!" << RESET << std::endl;
}

/*_______________________________________________________*/

void    ClapTrap::attack(const std::string& target) {
    if (checkPowerLevel()) {
        std::cout << RED << "[💣 ATTACK]" << RESET << " ClapTrap " << GREEN << this->_Name << RESET << " attacks, " << RED << target << RESET << " causing " << this->_attackDamage << " points of damage!";
        this->_energyPoints--;
        this->status();
    }
    else
        return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    
    if ((int)amount < 0)
		std::cout << RED << "[⁉️ invalid amount] Reperation amount needs to be positive!" << RESET;
    else if (checkPowerLevel() && (int)amount >= 0) {
        std::cout << YELLOW << "[🛠️ REPAIR]" << RESET << " ClapTrap " << GREEN << this->_Name << RESET << " is repairing itself causing its " << this->_hitPoints << " hitpoints to increase by " << amount;
        this->_energyPoints--;
        this->_hitPoints = this->_hitPoints + amount;
    }
    this->status();
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    
    if (checkPowerLevel() == 0)
        return ;
    if ((int)amount < 0)
        std::cout << RED << "[⁉️ invalid amount] Damage amount needs to be positive!" << RESET;
    else if ((this->_hitPoints >= amount)) {
        std::cout << BLUE << "[💥 DAMAGE]" << RESET << " ClapTrap " << GREEN << this->_Name << RESET << " got attacked causing its " << this->_hitPoints << " hitPoints to decrease by " << amount;
        this->_hitPoints = this->_hitPoints - amount;
    }
    else {
        std::cout << RED << "[💥 LETHAL DAMAGE]" << RESET << " ClapTrap " << GREEN << this->_Name << RESET << " got attacked causing it fatal damage and death";
        this->_hitPoints = 0;
    }
    this->status();

    return ;
}

void    ClapTrap::data() {

    std::cout << std::endl << std::endl << UNDERLINE << "Data:" << RESET << std::endl;
    std::cout << "Name: " << this->_Name << std::endl;
    std::cout << "hitPoints: " << this->_hitPoints << std::endl;
    std::cout << "energyPoints: " << this->_energyPoints << std::endl;
    std::cout << "attackDamage: " << this->_attackDamage << std::endl << std::endl;
}

void    ClapTrap::status() {

    std::cout << std::endl << "→" << RESET;
    std::cout << " hitPoints: " << this->_hitPoints;
    std::cout << " | energyPoints: " << this->_energyPoints; 
    std::cout << " | attackDamage: " << this->_attackDamage << std::endl << std::endl;
}

int     ClapTrap::checkPowerLevel() const {

    if (this->_energyPoints == 0 && this->_hitPoints == 0)
        return (std::cout << RED << "[💀 DEAD] " << _Name << "has no more energy points and hits points. It can't do anything!" << RESET << std::endl, 0);
    else if (this->_energyPoints == 0)
        return (std::cout << RED << "[🔋 OUT OF ENERGY] " << _Name << " has no more energy points to get repaired. It can't do anything!" << RESET << std::endl, 0);
    else if (this->_hitPoints == 0)
        return (std::cout << RED << "[💔 OUT OF HITS] " << _Name << " has no more hits points to attack. It can't do anything!" << RESET << std::endl, 0);
    else
        return (1);
}
