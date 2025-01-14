/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:48:19 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:15 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _name("zombiess") {
    std::cout << GREEN << "Zombie " << this->_name << " is born on the Stack!" << RESET << std::endl;
}

Zombie::~Zombie() {
    std::cout << RED << "Zombie " << this->_name << " is dead!" << RESET << std::endl;
}

// std::string     getName( void ) {
//     std::string		name;
//     std::cout << GREEN << "Enter Zombie name: ";
//     std::getline(std::cin, name);
//     std::cout << RESET;
//     return (name);
// };

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
