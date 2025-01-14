/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:01:12 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 22:52:28 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Brain.hpp"

Brain::Brain(void) {
    std::cout << GREEN << "* [🧠 Brain] Constructor called!" << RESET << std::endl;
}

Brain::Brain(const Brain& src) {

    if (this != &src) {
        for (int i = 0; i < 100; i++) {
            this->Ideas[i].clear();
        }
        for (int i = 0; i < 100; i++) {
            this->Ideas[i] = src.Ideas[i];
        }
    }
}

Brain& Brain::operator=(const Brain& src) {

    if (this != &src) {
        for (int i = 0; i < 100; i++) {
            this->Ideas[i].clear();
        }
        for (int i = 0; i < 100; i++) {
            this->Ideas[i] = src.Ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << RED << "* [🧠 Brain] Destructor called!" << RESET << std::endl;
}

