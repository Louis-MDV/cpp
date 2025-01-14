/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:55:45 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/21 13:52:39 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    for (std::size_t i = 1; argv[i] != NULL; ++i) {
        char* input = argv[i];

        for (std::size_t i = 0; input[i]; ++i) {
            input[i] = std::toupper(input[i]);
        }
        std::cout << input;
    }
	std::cout << std::endl;
    return (0);
}
