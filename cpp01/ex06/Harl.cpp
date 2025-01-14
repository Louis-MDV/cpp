/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:22:54 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/02 11:09:59 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


harl::harl( void ) {
};

harl::~harl() {
};

void    harl::debug( void ) {
    std::cout << RED << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << RESET << std::endl;
};

void    harl::info( void ) {
    std::cout << RED << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
};

void    harl::warning( void ) {
    std::cout << RED << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
};

void    harl::error( void ) {
    std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
};

Levels getLevelFromString(const std::string& levelStr) {
    if (levelStr == "DEBUG") return debug;
    else if (levelStr == "INFO") return info;
    else if (levelStr == "WARNING") return warning;
    else if (levelStr == "ERROR") return error;
    else return unkown;
}

void    putstr(std::string level) {
    std::cout << YELLOW << "[ " << level << " ]" << RESET <<std::endl;
};

int checkargs(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " <level>" << std::endl;
        return 1;
    }
    return 0;
};
