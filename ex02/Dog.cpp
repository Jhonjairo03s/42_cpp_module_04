/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:14:04 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 21:18:19 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void    Dog::makeSound(void) const
{
    std::cout << "Guau" << '\n';
}

Dog::Dog() : Animal()
{
    std::cout << "Default constructor of the derived class Dog called" << '\n';
    this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Copy constructor called of the derived class Dog called" << '\n';
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator of the derived class Dog called" << '\n';
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor of the derived class Dog called" << '\n';
}
