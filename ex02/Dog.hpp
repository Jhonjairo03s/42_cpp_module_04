/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:35:15 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/15 15:56:02 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class   Dog : public Animal
{
    public:
        void    makeSound(void) const;
        Dog();
        Dog(const Dog& other);
        Dog&    operator=(const Dog& other);
        ~Dog();
};

#endif
