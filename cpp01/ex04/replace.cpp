/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:46:12 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/02 00:14:42 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int check_args(int ac, char **av) {
    if (ac < 3) {
        std::cerr << "Usage: " << av[0] << " <wordToReplace> <newWord>" << std::endl;
        return 1;
    }
    return 0;
};

int   ft_replace(std::string &line, int rpos, const std::string& wordToReplace, const std::string& newWord) {

    std::string buf;
    int lengthOldWord = wordToReplace.length();

    buf = line.substr(0, rpos);
    buf.append(newWord);
    buf.append(line.substr(rpos + lengthOldWord));
    line = buf;
    return (lengthOldWord);
};
