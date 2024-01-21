/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:35:06 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/21 20:00:00 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string type); // Constructor (optional based on your needs)
    ~Weapon(void);
    std::string& getType(); // Returns a const reference to the type
    void setType(std::string newType); // Sets the type
};

#endif
