/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:42:48 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/03 22:38:29 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl HARL;
	std::cout << BG_BRIGHT_WHITE << GREEN << "Hey, Harl, give us some INFO" << RESET<< std::endl;
	HARL.complain("INFO");

	std::cout << BG_BRIGHT_WHITE << RED <<  "Hey, Harl, give us some ERRORS" << RESET << std::endl;
	HARL.complain("ERROR");

	std::cout << BG_BRIGHT_WHITE <<YELLOW <<  "Hey, Harl, give us some WARNINGS" << RESET << std::endl;
	HARL.complain("WARNING");

	std::cout << BG_BRIGHT_WHITE << CYAN <<  "Hey, Harl, let's DEBUG" << RESET << std::endl;
	HARL.complain("WARNING");

	std::cout << BG_BRIGHT_WHITE << PURPLE <<  "Hey, Harl, let's do something else" << RESET << std::endl;
	HARL.complain("Something else");

}