/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:47:48 by maria             #+#    #+#             */
/*   Updated: 2024/01/17 23:05:40 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this -> name = name;
    std::cout << "Zombie with is created" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Destruction of a zombie " << std::endl;
}

void Zombie::announce(int index)
{
   std::cout << index << ": Hello helloooo !" << std::endl;
	return ;
}

void Zombie::setname(std::string name)
{
    this -> name = name;
}
