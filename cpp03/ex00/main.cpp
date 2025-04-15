/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:47:24 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 01:25:08 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap fromage("P'tit Louis");

	fromage.data();
    for(int i = 0; i < 8; i++)
        fromage.attack("ficello");
    fromage.beRepaired(10);
    fromage.takeDamage(1);
    //error
    fromage.takeDamage(-1);
    fromage.beRepaired(-1);

    fromage.takeDamage(42);
    fromage.takeDamage(5);
    
	fromage.attack("ficello");
	fromage.data();

}