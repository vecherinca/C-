//
// Created by Мария on 11/02/2024.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
    private:
        std::string name;
        int hit_points = 10;
        int energy_points = 10;
        int attack_damage = 0;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        // add copy and overloader
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);


};
#endif
