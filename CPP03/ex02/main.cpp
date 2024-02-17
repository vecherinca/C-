/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:52:19 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/17 15:26:53 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
    
    ClapTrap clapTrap("ClapName");
    FragTrap fragTrap("FragName");

    std::cout << "Starting interactions...\n";

    fragTrap.attack("ClapName");
    clapTrap.takeDamage(20);

    clapTrap.attack("FragName");
    fragTrap.takeDamage(5);

    // FragTrap offering a high five, showcasing unique behavior
    fragTrap.highFivesGuys();

    return 0;

}
