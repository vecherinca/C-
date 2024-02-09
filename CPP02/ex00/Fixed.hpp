/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:22:31 by maria             #+#    #+#             */
/*   Updated: 2024/02/09 20:34:41 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
  private:
    int fixed_point_number;
    static const int fractional_bits = 8;

  public:
    Fixed();
    ~Fixed();
    // Copy constructor
	  Fixed(const Fixed& copy): fixed_point_number { copy.fixed_point_number }
    {
		// no need to check for a denominator of 0 here since copy must already be a valid Fraction
		std::cout << "Copy constructor called\n"; // just to prove it works
	}
  
    int getRawBits( void ) const;
    void setRawBits(int const raw);
        
};

#endif
