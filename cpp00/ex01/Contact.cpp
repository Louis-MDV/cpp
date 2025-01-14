/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:41:02 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 18:15:31 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructor
Contact::Contact(){
};

//destructor
Contact::~Contact(){
};

//utils fn
bool isAlphabetic(const std::string& input) {
	for (int i = 0; input[i]; ++i)
		if (std::isalpha(input[i]) == false)
			return (false);
	return (true);
};

bool isNumeric(const std::string& input) {
	int i = 0;

    while (i < input.length()) {
        if (!std::isdigit(input[i]))
            return (false);
    i++;
    };
	return(true);
};

//add contact fn
std::string		Contact::getValidInput(std::string prompt) {
	
	std::string		input;

	while (true) {
		std::cout << YELLOW << prompt << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
        if (input.empty()) {
            std::cerr << "Error reading input or input is empty. Please try again." << std::endl;
            continue;
        }
        if (prompt == "▶︎ Phone number: ") {
            if (!isNumeric(input)) {
                std::cout << RED << "Please enter a valid phone number (numeric characters only)!\n" << RESET << std::endl;
            } else {
                return (input);
            }
        } else {
            if (!isAlphabetic(input)) {
                std::cout << RED << "Please enter 1 or more alphabetic characters!\n" << RESET << std::endl;
            } else {
                return (input);
            }
        }
	}
	return (input);
};

bool	Contact::promptInfosValid() {

	_firstname = getValidInput("▶︎ First Name: ");
	if (_firstname.empty())
		return (false);
	_lastname = getValidInput("▶︎ Last Name: ");
	if (_lastname.empty())
		return (false);
	_nickname = getValidInput("▶︎ Nickname: ");
	if (_nickname.empty())
		return (false);
	_darkestsecret = getValidInput("▶︎ Darkest secret: ");
	if (_darkestsecret.empty())
		return (false);
	_phonenumber = getValidInput("▶︎ Phone number: ");
	if (_phonenumber.empty())
		return (false);
	return (true);
};


//setters
void        Contact::setFirstname(const std::string& fName){
	_firstname = fName; 
};

void       Contact::setNickName(std::string& nName){
	_nickname = nName;
};

void        Contact::setLastName(std::string& lName){
	_lastname = lName;
};

void        Contact::setDarkestSecret(std::string& dsecret){
	_darkestsecret = dsecret;
};

void        Contact::setPhoneNumber(std::string& pNumber){
	_phonenumber = pNumber;
};

//getters
std::string Contact::getFirstName() const{
	return (this->_firstname);
};

std::string Contact::getLastName() const{
	return (this->_lastname);
};

std::string Contact::getNickName() const{
	return (this->_nickname);
};

std::string Contact::getDarkestSecret() const{
	return (this->_darkestsecret);
};

std::string Contact::getPhoneNumber() const{
	return (this->_phonenumber);
};
