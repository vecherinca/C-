/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:48:12 by maria             #+#    #+#             */
/*   Updated: 2024/01/20 17:58:50 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *MyHorde;
	int i = 0;
	int num;
	
	std::cout << "How many Zombies you want in your Horde?:";
	std::cin >> num;
	
	MyHorde = zombieHorde(num, "Masha");
	while (i < num)
	{
		MyHorde[i].announce(i+1);
		i++;
	}
	delete [] MyHorde;
}