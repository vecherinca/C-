/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:47:48 by maria             #+#    #+#             */
/*   Updated: 2024/01/20 19:13:14 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "zzzzZombie is being boooooorn" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Destruction of a zombie. (Nooooooooo I thought I will live forever)" << std::endl;
}

void Zombie::announce(int index)
{
   std::cout << "Zombie number " << index << " says hello" << std::endl;
	return ;
}

void Zombie::setname(std::string name)
{
    this -> name = name;
}
