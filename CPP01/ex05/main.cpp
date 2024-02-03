/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:42:48 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/03 19:54:30 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string userinput = "";
	Harl HARL;
	while (userinput.compare("exit"))
	{
		std::cout << "ENTER THE HARL LEVEL OR EXIT:";
		std::cin >> userinput;
		HARL.complain(userinput);
	}
}