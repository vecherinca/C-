/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:20:58 by maria             #+#    #+#             */
/*   Updated: 2024/01/21 20:00:07 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    return ;
}

Weapon::~Weapon(void) 
{
    return ;
}

void Weapon::setType(std::string newType)
{
    this -> type = newType;
}

std::string& Weapon::getType ()
{
    return (this -> type);
}