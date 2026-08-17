/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 12:53:19 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 21:16:49 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void    WrongCat::makeSound(void) const
{
    std::cout << "Miau WrongCat" << '\n';
}

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Default constructor of the derived class WrongCat called" << '\n';
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "Copy constructor called of the derived class WrongCat called" << '\n';
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Copy assignment operator of the derived class WrongCat called" << '\n';
    if (this != &other)
        WrongAnimal::operator=(other);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of the derived class WrongCat called" << '\n';
}
