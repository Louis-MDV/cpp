/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:34:39 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/01 17:52:23 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB {

    private:
        Weapon*         _bWeapon;
        std::string     _name;
    public:
        HumanB( std::string name );
        ~HumanB();
        void    attack() const;
        void    setWeapon(Weapon& bWeapon);
};

#endif //HUMANB_HPP