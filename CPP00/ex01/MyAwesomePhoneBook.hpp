/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:37 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/15 22:15:14 by maria            ###   ########.fr       */
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
            int contact_nb;
            void addContact();
            void displayContacts(const MyAwesomePhonebook& phonebook);
            size_t number_of_contacts;
       //void searchContact(void);

    private:
		Contact contacts[MAX_CONTACTS];
};

std::string get_input(std::string question)
{
    std::string input;
    std::cout << question;
    std::getline(std::cin, input);

    while (input.empty())
    {
        std::cout << question;
        std::getline(std::cin, input);
        
    }
    return input;
}

void MyAwesomePhonebook::addContact()
{
    
    if (number_of_contacts > MAX_CONTACT_INDEX)
        number_of_contacts = MAX_CONTACT_INDEX;
    
    contacts[number_of_contacts].setIndex(number_of_contacts);
    contacts[number_of_contacts].setfirstName(get_input("Your name please?: "));
    contacts[number_of_contacts].setlastName(get_input("Your last name please?: "));
    contacts[number_of_contacts].setNickname(get_input("Your nickname name please?: "));
    contacts[number_of_contacts].setphoneNumber(get_input("Your phone number please?: "));
    contacts[number_of_contacts].setdarkestSecret(get_input("Your darkest darkest secret please?(Won't tell anyone): "));

    // std::cout << " Index: " << contacts[number_of_contacts].getIndex() << std::endl;
    // std::cout << "First Name: " << contacts[number_of_contacts].getfirstName() << std::endl;
    // std::cout << "Last Name: " << contacts[number_of_contacts].getlastName() << std::endl;
    // std::cout << "Nickname: " << contacts[number_of_contacts].getNickname() << std::endl;
    // std::cout << "Phone Number: " << contacts[number_of_contacts].getphoneNumber() << std::endl;
    
   
    
}

void MyAwesomePhonebook::displayContacts(const MyAwesomePhonebook& phonebook) {
    
        std::string input;
        size_t index;
        std::cout << std::setw(10) << "Index" << "|"
                  << std::setw(10) << "First Name" << "|"
                  << std::setw(10) << "Last Name" << "|"
                  << std::setw(10) << "Nickname" << std::endl;
         
        for (size_t i = 0; i < phonebook.number_of_contacts; ++i) {
            contacts[i].ft_view_contact();
        }
        while (1)
        {
            std::cout << "Provide contact index: ";
            std::getline(std::cin, input);
            index = stoi(input);
            if (!index)
                std::cout << "Index does not exist. Try another one" << std::endl;
            else
                if (index > phonebook.number_of_contacts)
                    std::cout << "Index does not exist. Try another one" << std::endl;
                else
                {
                    contacts[index].ft_view_full_contact(index);
                    break;
                }
        }
        
    }
    
#endif