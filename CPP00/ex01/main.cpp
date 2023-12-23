/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:28:29 by mklimina          #+#    #+#             */
/*   Updated: 2023/12/23 17:23:33 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"
const std::string RED = "\033[31m";
const std::string ORANGE = "\033[33m";
const std::string YELLOW = "\033[93m";
const std::string GREEN = "\033[32m";
const std::string BLUE = "\033[34m";
const std::string PURPLE = "\033[35m";
const std::string RESET = "\033[0m";

int main(void)
{
    int userindex;
	MyAwesomePhonebook PB;
    std::cout << "ﮩ٨ـﮩﮩ٨ـ🫀ﮩ٨ـﮩﮩ٨ـ ﮩ٨ـﮩﮩ٨ـ🫀ﮩ٨ـﮩﮩ٨ـ \n";
	std::cout << RED << "       H" << ORANGE << "E" << YELLOW << "L" << GREEN << "L" << BLUE << "O" << RESET << "\n" ;
    std::cout << "  YOU LOOK SO GOOD \n";
    std::cout << "  CAN I GET YOUR NUMBER? \n";
    std::cout << "  AND SAVE IT IN MY PHONEBOOK....\n";
    std::cout << "ﮩ٨ـﮩﮩ٨ـ🫀ﮩ٨ـﮩﮩ٨ـ ﮩ٨ـﮩﮩ٨ـ🫀ﮩ٨ـﮩﮩ٨ـ \n";
    std::cout << "                                        \n";
    std::cout << "                                        \n";
    std::cout << "                                        \n";
    std::cout << "You have three commands to choose from: \n1.ADD(👉👈)\n2.SEARCH(🤗)\n3.EXIT(🥵🤏🖕ᶠYͧoͨᵏu)\n";
	std::cout << "                                        \n";	
    while (1)
    {
        
        std::string userinput; 
        userindex = 0;
        std::cout << "What u want to do?: ";
        std::cin >> userinput;
        if (userinput.compare("EXIT") == 0)
        {
             std::cout << "ADIOOOOOOOSSSSSSSSSSSS";
             return(0);
        }
        else if (userinput.compare("ADD") == 0)
        {
            PB.addContact(userindex);
        }
         
    }
}