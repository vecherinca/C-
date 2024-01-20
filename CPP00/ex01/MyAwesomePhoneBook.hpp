/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:37 by mklimina          #+#    #+#             */
/*   Updated: 2024/01/20 17:20:55 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWESOME_NOTEBOOK_HPP
# define MY_AWESOME_NOTEBOOK_HPP
# include "Contact.hpp"
# include <cstdlib>
# include <iostream>
# include <limits>
# include <string>
# define MAX_CONTACTS 8
# define MAX_CONTACT_INDEX 7

class MyAwesomePhonebook
{
  public:
	int index;
	int print;
	void addContact();
	void displayContacts();
	int number_of_contacts;
	int is_number_valid(int number);

  private:
	Contact contacts[MAX_CONTACTS];
};

std::string get_input(std::string question)
{
	int	eof;

	std::string input;
	std::cout << question;
	eof = 0;
	if (!std::getline(std::cin, input))
	{
		if (std::cin.eof() || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			eof = 2;
		}
	}
	while (input.empty())
	{
		if (eof == 2)
			break;
		std::cout << question;
		if (!std::getline(std::cin, input))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			eof = 2;
		}
	}
	return (input);
}

void MyAwesomePhonebook::addContact()
{
    
    if (this->number_of_contacts >= MAX_CONTACTS)
        this -> index = this->number_of_contacts % MAX_CONTACTS;
    else
        this -> index = this->number_of_contacts;

    
    std::string input;

    contacts[index].setIndex(index);
    
    input = get_input("Your name please?: ");
    if (input.empty()) return;
    contacts[index].setfirstName(input);

    input = get_input("Your last name please?: ");
    if (input.empty()) return; 
    contacts[index].setlastName(input);

    input = get_input("Your nickname please?: ");
    if (input.empty()) return; 
    contacts[index].setNickname(input);

    input = get_input("Your phone number please?: ");
    if (input.empty()) return; 
    contacts[index].setphoneNumber(input);
	
    input = get_input("Your darkest secret please? (Won't tell anyone): ");
    if (input.empty()) return; 
    contacts[index].setdarkestSecret(input);



}
int	check_the_input(std::string input)
{
	if (input.length() < 1 || input.length() >= 2)
		return (-1);
	if (*input.begin() < '0' || *input.begin() > '8')
		return (-1);
	return (*input.begin() - '0');
}

int MyAwesomePhonebook::is_number_valid(int number)
{
	if (number > this->number_of_contacts - 1)
		return (-1);
	return (0);
}
void MyAwesomePhonebook::displayContacts()
{
    std::string input;
	std::cout << std::setw(10) << "Index"
				<< "|"
				<< std::setw(10) << "First Name"
				<< "|"
				<< std::setw(10) << "Last Name"
				<< "|"
				<< std::setw(10) << "Nickname" << std::endl;
    
    if (this -> number_of_contacts > MAX_CONTACT_INDEX)
		this -> print = 8;
	else
		this -> print = this -> number_of_contacts;
	for (int i = 0; i < this -> print; ++i)
	{
		contacts[i].ft_view_contact();
	}
	if (this->number_of_contacts == 0)
	{
		std::cout << "There is no contacts in a Phonebook. Add something :)" << std::endl;
		return ;
	}
	while (1)
	{
		std::cout << "Provide contact index: ";
		if (!std::getline(std::cin, input))
			exit(-1);
		index = check_the_input(input);
		if (index == -1)
			std::cout << "Index does not exist. Try another one" << std::endl;
		else if (is_number_valid(index) == -1)
			std::cout << "Index does not exist. Try another one" << std::endl;
		else
		{
			contacts[index].ft_view_full_contact(index);
			break ;
		}
	}
	std::cout << "Let's go back to the menu :)" << std::endl;
}

#endif