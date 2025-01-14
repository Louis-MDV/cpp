/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:17:09 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/02 11:03:20 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main() {

    harl    harly;

    putstr("info");
    harly.complain("info");
    putstr("error");
    harly.complain("error");
    putstr("debug");
    harly.complain("debug");
    putstr("warning");
    harly.complain("warning");

    return 0;
};
