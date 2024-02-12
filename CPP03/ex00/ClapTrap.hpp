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
        unsigned int hit_points ;
        int energy_points;
        int attack_damage;

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
