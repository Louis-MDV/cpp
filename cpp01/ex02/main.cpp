/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:15:05 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:09 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int     main( void ) {

	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << UNDERLINE << "MEMORY ADDRESSES" << RESET << std::endl;
	std::cout << &str << std::endl << &stringPTR << std::endl << &stringREF << std::endl << std::endl;
	
	std::cout << UNDERLINE << "VALUES" << RESET << std::endl;
	std::cout << str << std::endl << *stringPTR << std::endl << stringREF << std::endl;

}
