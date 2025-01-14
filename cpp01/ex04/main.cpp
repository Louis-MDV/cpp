/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:19:35 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/02 00:15:52 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av) {

    if(check_args(ac, av))
		return 1;

	std::string		wordToReplace = av[1];
	std::string		newWord = av[2];
	std::ifstream	file("intial.txt");
	std::ofstream	rfile("final.txt");
	std::string		line;

	if (file.is_open() && rfile.is_open()) {
		while (std::getline(file, line)) {
			int rpos = 0;
			while (line.find(wordToReplace, rpos) != std::string::npos) {
				rpos = line.find(wordToReplace);
				rpos += ft_replace(line, rpos, wordToReplace, newWord);
			}
			rfile << line << std::endl;
		}
		file.close();   // Close input file
		rfile.close();  // Close output file
	} else {
		std::cerr << "Unable to open file(s)." << std::endl;
	}
	return 0;
}
