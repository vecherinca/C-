/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:37:58 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/20 19:48:10 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP


#include "Weapon.hpp"
#include <iostream>
class HumanB {
private:
    std::string name;
    Weapon* weapon; // Pointer to Weapon, allowing HumanB to have an optional Weapon

public:
    HumanB(const std::string& name); // Constructor with only name
    void setWeapon(Weapon& newWeapon); // Method to set the Weapon
    void attack() const; // Displays the attack message (if a Weapon is set)
};

#endif