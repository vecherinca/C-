/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:09:55 by maria             #+#    #+#             */
/*   Updated: 2024/02/06 23:20:33 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void    HumanB::attack( void ){
    if (this->weapon != NULL && this->weapon->getType() != "") {
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << name << " doesn't have a weapon to attack." << std::endl;
    }
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this -> weapon = &newWeapon;
    return ;
}

HumanB::HumanB(const std::string& name): name(name)
{
    return;
}

HumanB::~HumanB(void)
{
    return;
}