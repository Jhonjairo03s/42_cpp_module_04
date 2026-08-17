/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:55:49 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 13:14:40 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Sin Sonido WrongAnimal" << '\n';
}

WrongAnimal::WrongAnimal() : type("Domestico WrongAnimal")
{
    std::cout << "Default constructor of the base class WrongAnimal called" << '\n';
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Copy constructor called of the base class WrongAnimal called" << '\n';
    this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Copy assignment operator of the base class WrongAnimal called" << '\n';
    if (this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of the base class WrongAnimal called" << '\n';
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}
