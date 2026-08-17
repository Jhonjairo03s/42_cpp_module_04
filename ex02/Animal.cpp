/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:22:10 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 22:12:13 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*void    Animal::makeSound(void) const
{
    std::cout << "Sin Sonido" << '\n';
}*/

Animal::Animal() : type("Domestico")
{
    std::cout << "Default constructor of the abstract base class Animal called" << '\n';
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy constructor called of the abstract base class Animal called" << '\n';
    this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy assignment operator of the abstract base class Animal called" << '\n';
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor of the abstract base class Animal called" << '\n';
}

std::string Animal::getType(void) const
{
    return (this->type);
}
