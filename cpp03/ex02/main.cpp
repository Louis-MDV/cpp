/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:47:24 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 01:53:39 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap fromage("P'tit Louis");
    
	fromage.data();
    for(int i = 0; i < 8; i++)
        fromage.attack("ficello");
    fromage.beRepaired(10);
    fromage.takeDamage(1);
    //error
    fromage.takeDamage(-1);
    fromage.beRepaired(-1);
    fromage.takeDamage(42);
    fromage.highFivesGuys();

    fromage.takeDamage(105);

	fromage.attack("ficello");
	fromage.data();

}