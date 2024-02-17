/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:34:18 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/17 15:27:21 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this -> hit_points = 100;
	this -> energy_points = 100;
	this -> attack_damage = 30;
	std::cout << "< FragTrap > - " << this->name << " constructed." << std::endl;
	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " says CIIAOO!" << std::endl;
}


void    FragTrap::highFivesGuys( void ) {
	
   std::cout << "FragTrap " << name << " gives HIIIGHHH FIVESSSSS!" << std::endl;
}