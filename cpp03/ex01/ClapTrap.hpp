/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:47:20 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 01:28:31 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

const std::string RESET = "\033[0m";
const std::string UNDERLINE = "\033[4m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string ITALIC = "\033[3m";
const std::string BOLD = "\033[1m";

class ClapTrap {

	protected:
		std::string		_Name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public:
		ClapTrap(); //c
		ClapTrap(std::string Name); //cbis
		ClapTrap(const ClapTrap& src); //cc
		ClapTrap& operator=(const ClapTrap& src); //oa
		~ClapTrap(); //d
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	data();
		void	status();
		int		checkPowerLevel() const;
};

#endif // CLAPTRAP_HPP
