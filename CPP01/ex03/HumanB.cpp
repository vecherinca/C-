/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:09:55 by maria             #+#    #+#             */
/*   Updated: 2024/02/09 19:48:05 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void    HumanB::attack( void ){
    if (this->weapon != NULL) {
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

HumanB::HumanB(const std::string& name): name(name), weapon(NULL)
{
    return;
}

HumanB::~HumanB(void)
{
    return;
}