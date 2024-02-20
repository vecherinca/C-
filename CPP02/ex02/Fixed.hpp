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
    // The 6 comparison operators:
    bool operator>( const Fixed &cls);
    bool operator<( const Fixed &cls);
    bool operator>=( const Fixed &cls);
    bool operator<=( const Fixed &cls);
    bool operator!=( const Fixed &cls);
    bool operator==( const Fixed &cls);
    //The 4 arithmetic operators:
    Fixed operator+( const Fixed &cls);
    Fixed operator-( const Fixed &cls);
    Fixed operator*( const Fixed &cls);
    Fixed operator/( const Fixed &cls);
    // increment & decrement operators
    Fixed operator++(int);
    Fixed &operator++(void);
    Fixed operator--(int);
    Fixed &operator--(void);

    // operators max min
    static Fixed& min( Fixed &a, Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );

    int getRawBits( void ) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif
