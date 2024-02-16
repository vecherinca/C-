/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:52:19 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/16 21:11:41 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

int main() {
    std::cout <<
    "⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟧🟧⬛⬜⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛🟨🟨🟨🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟨⬛🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛🟨🟨🟨🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛⬛⬛⬛⬛🟧🟧⬛⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛⬛⬛⬛⬛🟨🟧⬛⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬛🟨🟨🟨⬛⬛⬛🟨🟨🟧🟧⬛⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟧🟧🟧⬛⬜⬜⬜⬜\n"
    "⬜⬛⬛⬛🟨🟨🟧🟨🟨🟨🟨🟨🟨🟧🟧🟧🟧🟧⬛⬛⬛⬜\n"
    "⬛🟨🟨🟨🟧🟧⬛🟨🟧🟧🟧🟧🟧🟧🟧⬛🟧🟧🟧🟧🟧⬛\n"
    "⬛🟧🟧🟧⬛⬛⬛🟨🟨🟧🟧🟧🟨🟧🟧⬛⬛⬛🟧🟧🟧⬛\n"
    "⬜⬛⬛⬛⬜⬜⬛🟨🟨🟨🟨🟨🟨🟧🟧⬛⬜⬜⬛⬛⬛⬜\n"
    "⬜⬜⬜⬜⬜⬛🟨🟨🟧🟧⬛⬛🟨🟨🟧🟧⬛⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬛🟨🟨🟧🟧⬛⬜⬜⬛🟨🟨🟧🟧⬛⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬛🟧🟧🟧⬛⬜⬜⬜⬜⬛🟨🟨🟧⬛⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬛⬛⬛⬜⬜⬜⬜⬜⬜⬛⬛⬛⬜⬜⬜⬜⬜\n";
    
    std::cout << "Starting battle..." << std::endl;
    
    ClapTrap clapTrap1("Masha");
    ClapTrap clapTrap2("Misha");


    clapTrap1.attack("Misha");
    clapTrap2.takeDamage(2);

    clapTrap2.attack("Masha");
    clapTrap1.takeDamage(3);

    clapTrap1.beRepaired(5);
    clapTrap2.beRepaired(5);

    return 0;
}