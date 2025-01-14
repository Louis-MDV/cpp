/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:51:16 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:22 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main( void ) {

    int N;
    Zombie* zHorde;
    
    N = 42;
    zHorde = zombieHorde(N, "zombies");
    for(int i = 0; i < N; i++)
		zHorde[i].announce();
    delete [] zHorde;
}
