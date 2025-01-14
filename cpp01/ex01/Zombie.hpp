/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:22:13 by louismdv          #+#    #+#             */
/*   Updated: 2024/09/30 19:08:29 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

const std::string 		RESET = "\033[0m";
const std::string 		RED = "\033[31m";
const std::string 		GREEN = "\033[32m";
const std::string 		YELLOW = "\033[33m";
const std::string 		BLUE = "\033[34m";
const std::string 		MAGENTA = "\033[35m";
const std::string 		CYAN = "\033[36m";
const std::string 		WHITE = "\033[37m";
const std::string 		BOLD = "\033[1m";
const std::string 		UNDERLINE = "\033[4m";

class   Zombie {

    private:
        std::string _name;
    public:
        Zombie(); // contructor creates an instance of the class
        ~Zombie();                  //destructor deestroys the instance of the class
        void    announce( void );
};

Zombie*    zombieHorde( int N, std::string name );

#endif
