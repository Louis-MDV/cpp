/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:38:35 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/25 12:47:44 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public AAnimal {
    
    private:
        const Brain*  _Brain;
    public:
        Cat();
        Cat(const std::string &type);
        Cat(const Cat& src);
        Cat& operator=(const Cat& src);
        ~Cat();
        void    makeSound() const;
};

#endif //CAT_HPP
