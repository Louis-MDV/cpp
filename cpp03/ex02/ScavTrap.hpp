/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:31:50 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/26 20:59:55 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
    public:
        ScavTrap(); //c
        ScavTrap(std::string name); //c param
        ScavTrap(const ScavTrap& src); //cc
        ScavTrap& operator=(const ScavTrap& src); //a operator
        ~ScavTrap(); //d

        void    attack(const std::string& target);
        void    guardGate();
};

#endif // SCAVTRAP_HPP
