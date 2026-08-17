/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:14:04 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/15 15:59:24 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void    Dog::makeSound(void) const
{
    std::cout << "Guau" << '\n';
}

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Default constructor of the base class Dog called" << '\n';
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Copy constructor called of the base class Dog called" << '\n';
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator of the base class Dog called" << '\n';
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor of the base class Dog called" << '\n';
}
