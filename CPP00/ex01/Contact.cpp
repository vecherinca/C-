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
	this -> firstName = str;	
}

void Contact::setphoneNumber(std::string str) 
{
	this -> phoneNumber = str;	
}
void Contact::setdarkestSecret(std::string str) 
{
	this -> darkestSecret = str;
}