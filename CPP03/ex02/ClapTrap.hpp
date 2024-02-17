/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:52:02 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/17 14:02:16 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hit_points ;
        unsigned int energy_points;
        unsigned int attack_damage;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &cls);
        ClapTrap &operator=( const ClapTrap& cls );
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);


};
#endif
