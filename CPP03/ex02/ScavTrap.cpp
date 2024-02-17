/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:32:07 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/17 14:17:30 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this -> hit_points = 100;
	this -> energy_points = 50;
	this -> attack_damage = 20;
	std::cout << "< ScavTrap > - " << this->name << " constructed." << std::endl;
	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " says CIIAOO!" << std::endl;
}

void    ScavTrap::guardGate()
{
	std::cout << "< ScavTrap > - " << this->name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this -> energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this -> attack_damage << " points of damage!" << std::endl;
    this -> energy_points -= 1;
}