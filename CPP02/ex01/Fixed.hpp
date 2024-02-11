/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:22:31 by maria             #+#    #+#             */
/*   Updated: 2024/02/10 20:28:12 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
  private:
    int fixed_point_number;
    static const int fractional_bits = 8;

  public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const int integer);
    Fixed (const float floating);
    Fixed(const Fixed& copy);

    Fixed& operator=( const Fixed &the_one_being_copied);
    int getRawBits( void ) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    toInt( void ) const;



        
};

#endif
