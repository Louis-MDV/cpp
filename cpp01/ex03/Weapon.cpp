/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:09:32 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:02 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string name ) : _type(name) {
}

Weapon::~Weapon() {
}

std::string const   Weapon::getType( void ) {

    std::string& typeRef = this->_type;
    return (typeRef);
}

void    Weapon::setType( std::string type ) {

    this->_type = type;
}
