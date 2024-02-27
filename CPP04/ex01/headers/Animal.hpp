/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:52:37 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/22 19:54:27 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal
{
    protected:
		std::string type;
	public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& cls);
        Animal& operator=(const Animal& to_be_copied_from);
        virtual ~Animal();

        virtual void    makeSound( void ) const;
        std::string     getType( void ) const;

};

#endif