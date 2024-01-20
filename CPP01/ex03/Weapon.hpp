/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:35:06 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/20 19:36:06 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& type); // Constructor (optional based on your needs)
    
    const std::string& getType() const; // Returns a const reference to the type
    void setType(const std::string& newType); // Sets the type
};

#endif
