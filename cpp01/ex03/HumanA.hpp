/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:16:09 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/01 17:52:28 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA {

    private:
        Weapon&         _aWeaponRef;
        std::string     _name;
    public:
        HumanA( std::string, Weapon& club );
        ~HumanA();
        void    attack();
};

#endif // HUMANA_HPP