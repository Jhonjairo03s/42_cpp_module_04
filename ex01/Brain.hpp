/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:49:44 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/08/17 13:57:16 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        Brain&  operator=(const Brain& other);
        ~Brain();
};

#endif
