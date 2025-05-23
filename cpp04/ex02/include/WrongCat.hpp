/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:48:27 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 12:22:53 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat& src);
        WrongCat& operator=(const WrongCat& src);
        ~WrongCat();
        void    makeSound() const;
};

#endif //WRONGCAT_HPP
