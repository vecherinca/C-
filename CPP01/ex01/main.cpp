/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:48:12 by maria             #+#    #+#             */
/*   Updated: 2024/02/09 19:45:07 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *MyHorde;
	int i = 0;
	
	std::cout << "How many Zombies you want in your Horde?:";
	MyHorde = zombieHorde(10, "Masha");
	while (i < 10)
	{
		MyHorde[i].announce(i+1);
		i++;
	}
	delete [] MyHorde;
}