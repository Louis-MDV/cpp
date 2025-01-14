/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:15:23 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:43:47 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& club ) : _aWeaponRef(club), _name(name) {
}

HumanA::~HumanA () {
}

void    HumanA::attack() {

    std::cout << YELLOW << _name << RESET << " attacks with their " << _aWeaponRef.getType() << std::endl;
}
