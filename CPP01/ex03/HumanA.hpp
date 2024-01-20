/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:36:49 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/20 19:53:17 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon;  // reference as HumanA should always have a Weapon

public:
    HumanA(const std::string& name, Weapon& weapon); 
    void attack() const; 
};

#endif