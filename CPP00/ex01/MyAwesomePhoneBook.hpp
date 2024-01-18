/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:37 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/17 20:01:26 by maria            ###   ########.fr       */
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
            int contact_nb;
            void addContact();
            void displayContacts(const MyAwesomePhonebook& phonebook);
            int number_of_contacts;
            int is_number_valid(int number);

        private:
		    Contact contacts[MAX_CONTACTS];
};

std::string get_input(std::string question)
{
    std::string input;
    std::cout << question;
    if (!std::getline(std::cin, input))
        exit(-1);

    while (input.empty())
    {
        std::cout << question;
        if (!std::getline(std::cin, input))
            exit(-1);
        
    }
    return input;
}

void MyAwesomePhonebook::addContact()
{
    
    if (this ->number_of_contacts > MAX_CONTACT_INDEX)
        this -> number_of_contacts = MAX_CONTACT_INDEX;
    std::cout << "number of contacts:" << number_of_contacts << std::endl;
    contacts[number_of_contacts].setIndex(number_of_contacts);
    contacts[number_of_contacts].setfirstName(get_input("Your name please?: "));
    contacts[number_of_contacts].setlastName(get_input("Your last name please?: "));
    contacts[number_of_contacts].setNickname(get_input("Your nickname name please?: "));
    contacts[number_of_contacts].setphoneNumber(get_input("Your phone number please?: "));
    contacts[number_of_contacts].setdarkestSecret(get_input("Your darkest darkest secret please?(Won't tell anyone): "));    
}

int check_the_input(std::string input)
{
    if (input.length() < 1 || input.length() >= 2)
        return(-1);
    if (*input.begin() < '0' || *input.begin() > '8')
        return(-1);
    return(*input.begin() - '0');
}

int MyAwesomePhonebook::is_number_valid(int number)
{
    if (number > this ->number_of_contacts - 1)
        return(-1);
    return(0);
}
void MyAwesomePhonebook::displayContacts(const MyAwesomePhonebook& phonebook) {
    
        std::string input;
        int index;
        std::cout << std::setw(10) << "Index" << "|"
                  << std::setw(10) << "First Name" << "|"
                  << std::setw(10) << "Last Name" << "|"
                  << std::setw(10) << "Nickname" << std::endl;
         
        for (int i = 0; i < phonebook.number_of_contacts; ++i) {
            contacts[i].ft_view_contact();
        }
        while (1)
        {
            std::cout << "Provide contact index: ";
            if(!std::getline(std::cin, input))
                exit(-1);
            index = check_the_input(input);
            if (index == -1)
                std::cout << "Index does not exist. Try another one" << std::endl;
            else if (is_number_valid(index) == -1)
                std::cout << "Index does not exist. Try another one" << std::endl;
            else
            {
                contacts[index].ft_view_full_contact(index);
                break;
            }
        }

        std::cout << "Let's go back to the menu :)" << std::endl;
        
    }
    
#endif