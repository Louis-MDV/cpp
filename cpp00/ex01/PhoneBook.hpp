/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:48:46 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 19:01:13 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# define CONTACTS_MAX   8
# define ERROR			-1
# define COL_LEN		10
# define BLUE 			"\033[34m"
# define RESET			"\033[0m"
# define EDGE			BLUE "|" RESET
# define TOP			"+----------+----------+----------+----------+"


class PhoneBook {
private:
    Contact contact_tab[CONTACTS_MAX];
public:
    PhoneBook(void);
    ~PhoneBook(void);
    int		addContact(int indx);
	int		search(int indx);
	bool    phonebook_is_empty(int indx);
};

#endif
