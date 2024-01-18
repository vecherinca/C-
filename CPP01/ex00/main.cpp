/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:48:12 by maria             #+#    #+#             */
/*   Updated: 2024/01/17 22:33:03 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "This zombie named Masha, allocated on a old planet named heap" << std::endl;
    Zombie *Masha = newZombie("Masha");
    std::cout << "Masha, tell something!" << std::endl;
    Masha->announce();
    
    
    std::cout << "This zombie named Zachary, allocated on stack" << std::endl;
    randomChump("Zachary");

    delete(Masha);

    return(0);
    
}