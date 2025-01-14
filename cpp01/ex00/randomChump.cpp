/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:51:12 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:30 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie z(name);  // Create Zombie on the stack (local to this function)
    z.announce();    // Zombie announces itself
    // No need for delete, zombie is destroyed automatically when function ends
}
