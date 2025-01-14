/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:48 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/27 11:51:38 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"

int main() {

    const Animal* a = new Animal();
    const Animal* b = new Dog();
    const Animal* c = new Cat();

    std::cout << b->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;

    a->makeSound();
    b->makeSound();
    c->makeSound();

    delete a;
    delete b;
    delete c;

    const WrongAnimal* d = new WrongAnimal();
    const WrongAnimal* e = new WrongCat();

    std::cout << d->getType() << " " << std::endl;
    std::cout << e->getType() << " " << std::endl;

    d->makeSound();
    e->makeSound();

    delete d;
    delete e;
}
