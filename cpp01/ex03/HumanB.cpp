/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:50:15 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:41 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _bWeapon(nullptr),  _name(name) {
}

HumanB::~HumanB () {
}

void    HumanB::attack() const {

    if (_bWeapon) {
        std::cout << YELLOW << _name << RESET << " attacks with their " << _bWeapon->getType() << std::endl;
    } else {
        std::cout << RED << _name << RESET << " has no weapon to attack with!" << std::endl;
    }
}

void    HumanB::setWeapon( Weapon& bWeapon ) {

    _bWeapon = &bWeapon;
}
