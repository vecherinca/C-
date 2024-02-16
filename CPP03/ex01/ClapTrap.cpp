/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:51:57 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/16 20:51:58 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name) ,hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap " << name << " is here!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " says CIIAOO!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cls)
{
    *this = cls;
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& cls ) {
    this->name = cls.name;
    this->hit_points = cls.hit_points;
    this->energy_points = cls.energy_points;
    this->attack_damage = cls.attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this -> energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this -> attack_damage << " points of damage!" << std::endl;
    this -> energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this -> hit_points <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
    this -> hit_points -= amount;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (this -> energy_points <= amount)
    {
        std::cout << "Error message" << std::endl;
        return;
    }
    std::cout << "ClapTrap repairs itself with " << amount <<"number of points" << std::endl;
    energy_points-= 1;
    hit_points += amount;
}


