/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <maria@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:22:31 by maria             #+#    #+#             */
/*   Updated: 2024/02/04 20:29:38 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
  private:
    int fixed_point_number;
    static const int fractional_bits;

  public:
    Fixed();
    ~Fixed();
    
    int getRawBits( void ) const;
    void setRawBits(int const raw);
        
};

#endif
