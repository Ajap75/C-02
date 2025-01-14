/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:12 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/14 16:53:14 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

class Fixed 
{
    private :
    
    int FixedNumber;
    static int const fractionnal_part;

    public :

    Fixed();
    Fixed( const int );
    Fixed( const float );
    Fixed( const Fixed& other );
    Fixed& operator=( const Fixed& other );

    ~Fixed();

    float toFloat ( void ) const;
    int toInt ( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

std::ostream& operator <<(std::ostream& out, const Fixed& Fixed);