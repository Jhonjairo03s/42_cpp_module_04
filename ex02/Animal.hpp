/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:58:57 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 22:07:08 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class   Animal
{
    protected:
        std::string type;
    public:
        virtual void    makeSound(void) const = 0;;
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
        std::string getType(void) const;
};

#endif
