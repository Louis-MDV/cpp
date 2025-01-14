/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:27 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 19:24:29 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//constructor: allocate space for all 9 contacts in contact_tab
PhoneBook::PhoneBook(void) {
    for (int i = 0; i < CONTACTS_MAX; ++i) {
        contact_tab[i] = Contact();
    }
};

//destructor
PhoneBook::~PhoneBook(void) {
};

//fn to add a contact to tab
int     PhoneBook::addContact(int indx) {
	Contact	new_contact;

    if (new_contact.promptInfosValid() == false) {
        return (ERROR);
    }
	contact_tab[indx] = new_contact;
    indx = (indx + 1) % CONTACTS_MAX;  // This keeps indx in the range [0, CONTACTS_MAX - 1]
	return (indx);
}

std::string     trunc(std::string element) {

    int len = 0;
    std::string result;

    while (element[len])
        len++;
    if (len > 10) {
        result = element.substr(0, 9);
        result.append(".");
        return (result);
    }
    return (element);
};

int    PhoneBook::search(int indx) {
    std::string	input;
	int         search_indx;
    Contact     tmp;
    int         len;
    bool        isNumber;
    int         max_empty = 0;

    for (max_empty = 0; max_empty < CONTACTS_MAX; ++max_empty) {
        if (contact_tab[max_empty].getFirstName().empty()) {
            break;
        }
    }
    while (true) {
        isNumber = true;
        std::cout << "Type the index of the contact to display between 1 and " << max_empty << " : ";
        std::getline(std::cin, input);
		if (std::cin.eof()) {
            std::cout << "Exiting search due to EOF." << std::endl;
            return (ERROR);
        }
        if (input.empty()) {
            std::cout << RED << "No input provided. Try again: " << RESET << std::endl;
            continue;
        }
        for (size_t i = 0; i < input.size(); ++i) {
            if (!isdigit(input[i])) {
                std::cout << RED << "Not a number. Try again: " << RESET << std::endl;
                isNumber = false;
                break;
            }
        }
        if (isNumber) {
            search_indx = std::stoi(input);
            if (search_indx > 0 && search_indx <= max_empty) {
                break ;
            } else {
                std::cout << RED << "Non valid index or no contact at that index. Try again: " << RESET << std::endl;
            }
        }
    }
    tmp = contact_tab[search_indx - 1];
    std::cout << trunc(tmp.getFirstName()) << std::endl;
    std::string data[3] = {trunc(tmp.getFirstName()), trunc(tmp.getLastName()), trunc(tmp.getNickName())};

	std::cout << BLUE << TOP << RESET << std::endl;
	std::cout << BLUE << EDGE << GREEN << "   INDEX  " << RESET << EDGE << YELLOW << "First Name" << RESET << EDGE << YELLOW << " Last Name" << RESET << EDGE << YELLOW <<  " Nick Name" << RESET << EDGE << std::endl;
	std::cout << BLUE << TOP << RESET << std::endl;
    
    std::cout << EDGE <<  std::setw(10) << std::right << search_indx << EDGE;
    for (int i = 0; i < 3; ++i) {
        std::cout << std::setw(10) << std::right << data[i] << EDGE;
    }
	std::cout << std:: endl << BLUE << TOP << RESET << std::endl << std::endl;
    return (1);
};

bool    PhoneBook::phonebook_is_empty(int indx) {
    if (indx == 0) {
        if(contact_tab[indx].getFirstName().empty()) {
            std::cout << RED << "Your phonebook is empty!" << RESET << std::endl << std::endl;   
            return (true);
        }
    }
    return (false);
};