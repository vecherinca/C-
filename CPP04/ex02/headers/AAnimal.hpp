/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:52:37 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/22 19:54:27 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
class AAnimal
{
    protected:
		std::string type;
	public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& cls);
        AAnimal& operator=(const AAnimal& to_be_copied_from);
        virtual ~AAnimal();

        virtual void    makeSound( void ) const = 0;
        std::string     getType( void ) const;

};

#endif