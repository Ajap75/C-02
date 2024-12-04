/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:10 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/03 15:06:41 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"




// Fixed& Fixed::min(Fixed& a, Fixed& b)
// {
//     if (a > b)
//         return(b);
//     else 
//         return(a);
// }

// Fixed& Fixed::max (Fixed& a, Fixed& b)
// {
//     if (a > b)
//         return(a);
//     else 
//         return(b);
// }

// const Fixed& Fixed::max (const Fixed& a, const Fixed& b)
// {
//      if (a > b)
//         return(a);
//     else 
//         return(b);
// }

// const Fixed& Fixed::min (const Fixed& a, const Fixed& b)
// {
//     if (a > b)
//         return(b);
//     else 
//         return(a);
// }

// /*Défintion des attributs statiques de la classe. Ne pas remettre static lors
//  de la définition ici car on ne veut pas limiter la porter de la variable*/
 
// /*A member function float toFloat( void ) const; that converts the fixed point
// value to a floating point value. cf comment below*/

// float Fixed::toFloat( void ) const
// {
//     float float_value;

//     float_value = static_cast<float>(Fixed::FixedNumber) / (1 << Fixed::fractionnal_part);

//     return (float_value);
// }

// /*A member function int toInt( void ) const; that converts the fixed point value
// to an integer value. cf comment below*/

// int Fixed::toInt( void ) const
// {
//     int int_original;

//     int_original = FixedNumber >> fractionnal_part;

//     return (int_original);
// }
// int const Fixed::fractionnal_part = 8;

// std::ostream& operator <<(std::ostream& out, const Fixed& Fixed)
// {
//     out << Fixed.toFloat();
//     return (out);
// }

