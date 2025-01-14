/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:51:16 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:33 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main( void ) {

	Zombie* z;
    z = newZombie("Zombie1");   // Create Zombie with dynamic allocation
    z->announce();  // Zombie announces itself
    delete z;   // Important! Deallocate memory when you're done

    randomChump("Zombie2"); // Temporary zombie created and announces itself
}
