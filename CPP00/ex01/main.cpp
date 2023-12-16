/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:28:29 by mklimina          #+#    #+#             */
/*   Updated: 2023/12/16 19:53:59 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

int main(void)
{
	Contact obj;
	
	int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "You entered: " << number << std::endl;
    return 0;
	
}