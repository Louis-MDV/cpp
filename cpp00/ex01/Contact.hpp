/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:05:17 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 18:15:35 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <cctype>  	//for std::isalpha
#include <iostream>	//for std::cout
#include <iomanip>	//for data
#include <limits>

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

class Contact {
	private:
		//attributes
		std::string 	_firstname;
		std::string 	_lastname;
		std::string 	_nickname;
		std::string 	_darkestsecret;
		std::string 	_phonenumber;
	public:
		//constructor
		Contact();
    	// Contact(const std::string &fName, const std::string &lName, const std::string &nName, const std::string &pNumber, const std::string &dSecret);
		//desctrutor
		~Contact();

		//utils functions
		bool			promptInfosValid();
		std::string		getValidInput(std::string prompt);


		//setters
		void		 	setFirstname(const std::string& fName) ;
		void			setLastName(std::string& lName);
		void			setNickName(std::string& nName);
		void			setDarkestSecret(std::string& dsecret);
		void			setPhoneNumber(std::string& pNumber);

		//getters
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickName() const;
		std::string		getDarkestSecret() const;
		std::string		getPhoneNumber() const;
};


#endif
