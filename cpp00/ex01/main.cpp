/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:56:21 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 18:09:14 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void	menu(void)
{
	std::cout << BLUE << "+-----------------------------+" << RESET << std::endl;
	std::cout << BLUE << "| " << BOLD << "    Available Commands" << RESET << BLUE << "      |" << RESET << std::endl;
	std::cout << BLUE << "+-----------------------------+" << RESET << std::endl;
	std::cout << BLUE << "| " << GREEN << "ADD" << RESET << BLUE << "    | " << YELLOW << "Add a new contact" << RESET << BLUE << "  |" << RESET << std::endl;
	std::cout << BLUE << "| " << GREEN << "SEARCH" << RESET << BLUE << " | " << YELLOW << "Search contacts" << RESET << BLUE << "    |" << RESET << std::endl;
	std::cout << BLUE << "| " << GREEN << "EXIT" << RESET << BLUE << "   | " << YELLOW << "Exit the program" << RESET << BLUE << "   |" << RESET << std::endl;
	std::cout << BLUE << "+-----------------------------+" << RESET << std::endl;
}



int		main(int ac, char **av){

    std::string input;
    PhoneBook   phonebook;
    int         indx = 0;

    while (true)
    {
        menu();
        std::cout << "Type SEARCH, ADD or EXIT:" << std::endl << GREEN << "▶︎ ";
        std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
        if (!input.compare("ADD")) {            
            indx = phonebook.addContact(indx);
                if (indx == ERROR)
                    break ;
        }
        else if (!input.compare("SEARCH")) {
            if (!phonebook.phonebook_is_empty(indx))
                phonebook.search(indx);
        }
        else if (!input.compare("EXIT"))
            return (EXIT_SUCCESS);
    }
    return (EXIT_SUCCESS);
}
