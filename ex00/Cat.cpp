/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:13:11 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/15 15:56:57 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void    Cat::makeSound(void) const
{
    std::cout << "Miau" << '\n';
}

Cat::Cat() : Animal() 
{
    this->type = "Cat";
    std::cout << "Default constructor of the base class Cat called" << '\n';
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Copy constructor called of the base class Cat called" << '\n';
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator of the base class Cat called" << '\n';
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor of the base class Cat called" << '\n';
}
