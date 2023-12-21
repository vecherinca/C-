/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:20:09 by mklimina          #+#    #+#             */
/*   Updated: 2023/12/21 17:33:27 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    public:
   	// 	Contact();
    // 	~Contact();
    // getters
        const std::string& getfirstName(void) const;
        const std::string& getlastName(void) const;
        const std::string& getNickname(void) const;
        const std::string& getphoneNumber(void) const;
        const std::string& getdarkestSecret(void) const;
        //setters
        void setfirstName(std::string str) ;
        void setlastName(std::string str) ;
        void setNickname(std::string str) ;
        void setphoneNumber(std::string str) ;
        void setdarkestSecret(std::string str) ;
        
	private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
        //int         index;
    
        
};

//assign getters and setters 



#endif