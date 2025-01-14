/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:17:09 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/02 11:11:00 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(int ac, char **av) {

    harl    harly;
    Levels  level;
    if(checkargs(ac, av))
        return 1;
    level = getLevelFromString(av[1]);
    
    switch (level) {
        case debug:
            putstr("DEBUG");
            harly.debug();
        case info:
            putstr("INFO");
            harly.info();
        case warning:
            putstr("WARNING");
            harly.warning();
        case error:
            putstr("ERROR");
            harly.error();
        default:
            std::cout << RED << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
    }

    return 0;
};
