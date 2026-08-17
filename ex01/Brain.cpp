/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:59:47 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 20:27:16 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor of the class Brain called" << '\n';
}

Brain::Brain(const Brain& other)
{
    int index;

    std::cout << "Copy constructor called of the class Brain called" << '\n';
    index = 0;
    while (index < 100)
    {
        this->ideas[index] = other.ideas[index];
        index++;
    }
}

Brain&  Brain::operator=(const Brain& other)
{
    int index;

    std::cout << "Copy constructor called of the class Brain called" << '\n';
    index = 0;
    if (this != &other)
    {
        while (index < 100)
        {
            this->ideas[index] = other.ideas[index];
            index++;
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor of the class Brain called" << '\n';
}
