/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:18:52 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/02 10:29:48 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <iomanip>

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

class harl {
    public:
        harl( void );
        ~harl();
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        void    complain( std::string level );
};

void    putstr(std::string level);

#endif //HARL_HPP
