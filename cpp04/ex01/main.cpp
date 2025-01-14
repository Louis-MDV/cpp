/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:48 by louismdv          #+#    #+#             */
/*   Updated: 2024/11/05 16:12:36 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"
#include "include/Brain.hpp"

int main() {
    
    int num = 10;
    Animal *animalTab[num];

    std::cout << "---------------------TAB CREATION---------------------" << std::endl;

    for (int i = 0; i < num/2; ++i) {
        animalTab[i] = new Dog();
    }
    for (int i = 5; i < num; ++i) {
        animalTab[i] = new Cat();
    }

    std::cout << "---------------------TAB DESTRUCTION---------------------" << std::endl;

    for (int i = 0; i < 10; ++i) {
        delete animalTab[i];
    }

    std::cout << "--------------------[DOG] DEEP COPY TESTING-------------------" << std::endl;
    
    Animal *dogSrc = new Dog("big black DOG");
    Animal *dogCopy = dogSrc;
	
	std::cout << "src type: " << dogSrc->getType() << std::endl;
    std::cout << "copy type: " << dogCopy->getType() << std::endl;

    delete dogSrc;

    // std::cout << "src type: " << dogSrc->getType() << std::endl;
    std::cout << "copy type: " << dogCopy->getType() << std::endl;


    std::cout << "--------------------[CAT] DEEP COPY TESTING--------------------" << std::endl;

    Cat src2("big black CAT");
    Cat catCopy(src2);
    std::cout << "src type: " << src2.getType() << std::endl;
    std::cout << "copy type: " << catCopy.getType() << std::endl;

    src2.setType("pink funny CAT");
    std::cout << "src type: " << src2.getType() << std::endl;
    std::cout << "copy type: " << catCopy.getType() << std::endl;
    
    std::cout << "------------------DEEP COPY TESTING DESTRUCTION------------------" << std::endl;

    return 0;
}
