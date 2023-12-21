/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:37 by mklimina          #+#    #+#             */
/*   Updated: 2023/12/21 18:25:02 by mklimina         ###   ########.fr       */
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

       //void addContact(void);
       //void searchContact(void);

    private:
        size_t count;
		Contact contacts[MAX_CONTACTS];
};

#endif