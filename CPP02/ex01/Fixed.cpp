/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:48:25 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/10 20:36:23 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_number = raw;
}

int Fixed::toInt( void ) const
{
    // or fixed_point_number >> 8
    return (this -> fixed_point_number >> this -> fractional_bits);
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>( this->fixed_point_number ) / (1 << this -> fractional_bits );
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

// Additional constructors
Fixed::Fixed(const int integer)
{
    std::cout << "Integer constructor called" << std::endl;
    this -> fixed_point_number = integer * (1 << this ->fractional_bits);
}

Fixed::Fixed(const float floating)
{
    //roundf scales the the value to the closest integer representation
    std::cout << "Float constructor called" << std::endl;
    this -> fixed_point_number =std::roundf(floating * (1 << this ->fractional_bits));
}


// copy constructor + operator overload
Fixed::Fixed(const Fixed &the_one_being_copied)
{
	std::cout << "Copy constructor called" << std::endl;;
    // important notion: we can't use just the setrawbits as when we
    // pass the class as the argument we need directly to use =
    // hence here we use "="
    //this -> setRawBits(the_one_being_copied.getRawBits()) ;
    *this = the_one_being_copied;
}

Fixed& Fixed::operator=(const Fixed &the_one_being_copied)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &the_one_being_copied)
	    this -> fixed_point_number = the_one_being_copied.getRawBits();
	return(*this);
}

std::ostream & operator<<( std::ostream & out_stream, Fixed const & value ) {
    out_stream << value.toFloat();
    return out_stream;
}