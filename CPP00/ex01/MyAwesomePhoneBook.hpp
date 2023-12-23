/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:37 by mklimina          #+#    #+#             */
/*   Updated: 2023/12/23 18:18:29 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_AWESOME_NOTEBOOK_HPP
#define MY_AWESOME_NOTEBOOK_HPP

#include <iostream>
#include <string>

# include "Contact.hpp"

# define MAX_CONTACTS 8
# define MAX_CONTACT_INDEX 7

class MyAwesomePhonebook
{
	    public:
       /* Default constructor */
       //MyAwesomePhonebook();
            void addContact(int index);
       //void searchContact(void);

    private:
        //size_t count;
		Contact contacts[MAX_CONTACTS];
};

void MyAwesomePhonebook::addContact(int index)
{
    if (index > 7)
        index = 7;
    std::string var;
    
 
    std::cout << "Your name please?: ";
    std::cin >> var;
    contacts[index].setfirstName(var);
    
    std::cout << "Your last name please?: ";
    std::cin >> var;
    contacts[index].setlastName(var);
    
    std::cout << "Your nickname please?: ";
    std::cin >> var;
    contacts[index].setNickname(var);
    
    std::cout << "And the phoooneee numbeeer?: ";
    std::cin >> var;
    contacts[index].setphoneNumber(var);
    
    std::cout << "The darkest darkest secret?: ";
    std::cin >> var;
    contacts[index].setdarkestSecret(var);
    
    std::cout << "Congrats cutie your number is saved. I'll call you in 2-3 business days\n";

    
}

#endif