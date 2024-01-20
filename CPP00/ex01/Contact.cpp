#include "Contact.hpp"

const std::string& Contact::getfirstName(void) const
{
	return(this->firstName);
}

const std::string& Contact::getlastName(void) const
{
	return(this->lastName);
}

const std::string& Contact::getNickname(void) const
{
	return(this->nickname);
}

const std::string& Contact::getphoneNumber(void) const
{
	return(this->phoneNumber);
}
const std::string& Contact::getdarkestSecret(void) const
{
	return(this->darkestSecret);
}

const int& Contact::getIndex(void) const
{
	return(this->index);
}
// setters
void Contact::setfirstName(std::string str)
{
	this->firstName=str;
}

void Contact::setlastName(std::string str)
{
	this -> lastName = str;
}

void Contact::setNickname(std::string str) 
{
	this -> nickname = str;	
}

void Contact::setphoneNumber(std::string str) 
{
	this -> phoneNumber = str;	
}
void Contact::setdarkestSecret(std::string str) 
{
	this -> darkestSecret = str;
}
void Contact::setIndex(int i) 
{
	this -> index = i;
}

static std::string	ft_printLen(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::ft_view_contact(void)
{
	std::cout << std::setw(10) << this->index << std::flush;
	std::cout << "|" << std::setw(10) << ft_printLen(this->firstName) << std::flush;
	std::cout << "|" << std::setw(10) << ft_printLen(this->lastName) << std::flush;
	std::cout << "|" << std::setw(10) << ft_printLen(this->nickname) << std::flush;
	std::cout << std::endl;

}

void	Contact::ft_view_full_contact(int index)
{
	std::cout << " ـ🫀ﮩ٨ـﮩﮩ٨ـ CONTACT n°" << index << " ـ🫀ﮩ٨ـﮩﮩ٨ـ " << std::endl;
	std::cout << "Index: " << this->index  << std::endl;
	std::cout << "First Name: " << this -> firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << std::endl;
}