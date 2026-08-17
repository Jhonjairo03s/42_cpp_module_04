/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:18:26 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 21:07:59 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    int index;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete  j;
    delete  i;

    const int n_animals = 10;
    const Animal* arrayAnimal[n_animals];

    index = 0;
    while (index < n_animals)
    {
        if (index < n_animals / 2)
            arrayAnimal[index] = new Dog();
        else
            arrayAnimal[index] = new Cat();
        index++;
    }

    index = 0;
    while (index < n_animals)
    {
        delete  arrayAnimal[index];
        index++;
    }

    std::cout << "\nprueba copia profunda" << std::endl;
    {
        Dog originalDog;
        
        Dog copyDog(originalDog);
        
        Dog assignedDog;
        assignedDog = originalDog;
    }

    std::cout << "\nSi salio del scope, todo salio bien chavales xd" << std::endl;

    return (0);
}
