/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:09:55 by maria             #+#    #+#             */
/*   Updated: 2024/01/21 20:15:35 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
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