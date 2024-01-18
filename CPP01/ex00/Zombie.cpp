/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:47:48 by maria             #+#    #+#             */
/*   Updated: 2024/01/17 22:22:11 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this -> name = name;
    std::cout << "Zombie with the name " << this->name << "is created" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Destruction of a zombie named " << this->name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this -> name << ":Braaaainzzzzzzz" << std::endl;
}

