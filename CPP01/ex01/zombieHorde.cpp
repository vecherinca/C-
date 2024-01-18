/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:48:07 by maria             #+#    #+#             */
/*   Updated: 2024/01/17 22:57:34 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
    int i = 0;
    
    Zombie *horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setname(name);
        i++;
    }
    return(horde);
}