/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:48:00 by maria             #+#    #+#             */
/*   Updated: 2024/01/20 17:51:14 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string.h>


class Zombie{

	public :
		
		Zombie(void);
		~Zombie(void);
		void setname(std::string name);
		void	announce(int index);
		
	private :
	
		std::string	name;
		
};

Zombie*    zombieHorde(int N, std::string name);
Zombie	*newZombie(std::string name);

#endif