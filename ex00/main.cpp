/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:18:26 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 13:26:28 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << '\n' << "--------------------------------------------" << '\n' << std::endl;

    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* x = new WrongCat();

    std::cout << x->getType() << " " << std::endl;
    x->makeSound();
    metaWrong->makeSound();

    delete metaWrong;
    delete x;

    return (0);
};
