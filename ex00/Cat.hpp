/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:24:28 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/15 15:32:36 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class   Cat : public Animal
{
    public:
        void    makeSound(void) const;
        Cat();
        Cat(const Cat& other);
        Cat&    operator=(const Cat& other);
        ~Cat();
};

#endif
