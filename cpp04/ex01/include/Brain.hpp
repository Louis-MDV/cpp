/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:01:10 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/24 17:31:37 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {

    public:
        Brain(void);
        Brain(const Brain& src);
        Brain& operator=(const Brain& src);
        ~Brain();
        std::string     Ideas[100];

};

#endif // BRAIN_HPP
