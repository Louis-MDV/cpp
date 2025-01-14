/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:46:21 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/02 00:14:28 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <string>

const std::string 		RESET = "\033[0m";
const std::string 		RED = "\033[31m";
const std::string 		GREEN = "\033[32m";
const std::string 		YELLOW = "\033[33m";
const std::string 		BLUE = "\033[34m";
const std::string 		MAGENTA = "\033[35m";
const std::string 		CYAN = "\033[36m";
const std::string 		WHITE = "\033[37m";
const std::string 		BOLD = "\033[1m";
const std::string 		UNDERLINE = "\033[4m";

int   ft_replace(std::string &line, int rpos, const std::string& wordToReplace, const std::string& newWord);
int check_args(int ac, char **av);

#endif // REPLACE_HPP
