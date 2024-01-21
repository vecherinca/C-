/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:36:49 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/21 19:00:10 by maria            ###   ########.fr       */
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
    void	attack(void);
    ~HumanA(void);
};

#endif