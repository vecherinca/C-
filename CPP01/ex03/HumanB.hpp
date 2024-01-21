/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:37:58 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/21 20:05:49 by maria            ###   ########.fr       */
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
    ~HumanB(void);
    void setWeapon(Weapon& newWeapon); 
    void attack(); 
};

#endif