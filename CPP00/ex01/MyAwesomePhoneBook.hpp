/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:37 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/07 16:52:42 by mklimina         ###   ########.fr       */
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

void MyAwesomePhonebook::addContact(int index)
{
    if (index > MAX_CONTACT_INDEX)
        index = MAX_CONTACT_INDEX;
    contacts[index].setIndex(index);
    contacts[index].setfirstName(get_input("Your name please?: "));
    contacts[index].setlastName(get_input("Your last name please?: "));
    contacts[index].setNickname(get_input("Your nickname name please?: "));
    contacts[index].setphoneNumber(get_input("Your phone number please?: "));
    contacts[index].setdarkestSecret(get_input("Your darkest darkest secret please?(Won't tell anyone): "));
    
}

void displayContact(int index, Contact contact) {
        std::cout << std::setw(10) << std::truncate(std::to_string(contact.getIndex(),10)) << "|"
                  << std::setw(10) << truncate(contact.getfirstName(),10) << "|"
                  << std::setw(10) << truncate(contact.getlastName(), 10) << "|"
                  << std::setw(10) << truncate(contact.getNickname(), 10) << std::endl;
    }

void MyAwesomePhonebook::displayContacts(const MyAwesomePhonebook& phonebook) {
    
        std::cout << std::right;
        std::cout << std::setw(10) << "Index" << "|"
                  << std::setw(10) << "First Name" << "|"
                  << std::setw(10) << "Last Name" << "|"
                  << std::setw(10) << "Nickname" << std::endl;

        for (size_t i = 0; i < phonebook.number_of_contacts; ++i) {
            displayContact(i, phonebook.contacts[i]);
        }
    }
    
#endif