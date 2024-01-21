/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:54:17 by maria             #+#    #+#             */
/*   Updated: 2024/01/21 20:16:03 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {
     
     return ;
}

HumanA::~HumanA(void)
{
    return ;
}

