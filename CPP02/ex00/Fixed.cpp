/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:48:25 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/21 19:15:21 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_number = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_number = 0;
}

Fixed::Fixed(const Fixed &the_one_being_copied)
{
	std::cout << "Copy constructor called\n";
	 *this = the_one_being_copied; 
}

Fixed& Fixed::operator=(const Fixed &the_one_being_copied)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &the_one_being_copied)
	this -> fixed_point_number = the_one_being_copied.getRawBits();
	return(*this);
}