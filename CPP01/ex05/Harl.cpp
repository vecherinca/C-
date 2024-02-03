/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:30:03 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/03 19:54:02 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::error(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"<< std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month."  << std::endl;
}
void Harl::debug(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain(std::string lvl)
{
	
	pointer_to_member funcs[] = {&Harl::debug, &Harl::warning, &Harl::info, &Harl::error};
	std::string lvls[] = {"DEBUG", "WARNING", "INFO", "ERROR"};

	int i = 0;
	int exec;
	while(i < 4)
	{
		exec = lvls[i].compare(lvl);
		if (exec == 0)
		{
			(this->*funcs[i])();
			break;
		}
		i++;	
	}
}