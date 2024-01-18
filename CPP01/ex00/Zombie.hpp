/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:48:00 by maria             #+#    #+#             */
/*   Updated: 2024/01/17 20:48:01 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string.h>


class Zombie{

	public :
		
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
		
	private :
	
		std::string	name;
		
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif