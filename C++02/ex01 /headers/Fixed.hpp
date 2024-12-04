/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:12 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/18 16:36:58 by antoinejour      ###   ########.fr       */
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
    Fixed& operator <<(const Fixed& other);

    ~Fixed();

    float toFloat ( void ) const;
    int toInt ( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

std::ostream& operator <<(std::ostream& out, const Fixed& Fixed);