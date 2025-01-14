/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:48 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 12:26:02 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"
#include "include/Brain.hpp"

int main()
{
    std::cout << std::endl << "---------------------TESTING---------------------" << std::endl << std::endl;

	// const AAnimal *i = new AAnimal(); /*AAnimal class is an abstract class, so can't intantiate itself*/
	const AAnimal *a = new Cat();
	const AAnimal *b = new Dog();

	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;

	a->makeSound();
	b->makeSound();

	delete a;
	delete b;

    // std::cout << std::endl << "---------------------WRONG_ANIMAL_TESTING---------------------" << std::endl << std::endl;


	// const WrongAnimal *c = new WrongAnimal(); //not abstract class, so intantiate itself
	// const WrongAnimal *d = new WrongCat();

	// std::cout << c->getType() << " " << std::endl;
	// std::cout << d->getType() << " " << std::endl;

	// c->makeSound();
	// d->makeSound();

	// delete c;
	// delete d;
}




