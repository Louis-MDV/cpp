/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:45:18 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/26 21:00:01 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& src);
        FragTrap& operator=(const FragTrap& src);
        ~FragTrap();
        void    highFivesGuys(void);
};


#endif //FRAGTRAP_HPP