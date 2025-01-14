/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:53:02 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 12:12:08 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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

class Brain;

class   AAnimal {

    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& src);
        AAnimal& operator=(const AAnimal& src);
        virtual         ~AAnimal() = 0;
        virtual void    makeSound() const = 0;
        std::string     getType() const;
        void            setType(std::string type);    
};

#endif // ANIMAL_HPP
