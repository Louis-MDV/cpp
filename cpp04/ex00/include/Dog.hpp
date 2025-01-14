/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:43 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/17 14:52:39 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& src);
        Dog& operator=(const Dog& src);
        ~Dog();
        void    makeSound() const;
};

#endif //DOG_HPP
