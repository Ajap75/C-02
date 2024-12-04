/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_arithmetic_operators.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:48:10 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/02 14:49:10 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"

/* Arithmetic operator definition*/

Fixed Fixed::operator +(const Fixed& other) const
{
    Fixed result;
    result.FixedNumber = FixedNumber + other.FixedNumber;
    return (result);
}

Fixed Fixed::operator -(const Fixed& other) const
{
    Fixed result;

    result.FixedNumber = FixedNumber - other.FixedNumber;
    return (result);
}

Fixed Fixed::operator *(const Fixed& other) const
{
    Fixed result;

    result.FixedNumber = (FixedNumber * other.FixedNumber) >> fractionnal_part;
    return (result);
}

/*Multiplication (*):

Multiplies the fixed-point values.
Since the product of two fixed-point numbers will include twice the number of fractional bits,
it must be shifted back (>> fractionnal_part).*/

Fixed Fixed::operator /(const Fixed& other) const
{
    if (other.FixedNumber == 0)
       throw std::invalid_argument("Division by zero");
    Fixed result;
    result.FixedNumber = (FixedNumber << fractionnal_part / other.FixedNumber);
    return (result);
}
/*Division (/):
Divides the fixed-point values. Since division will remove the fractional bits,
the numerator is shifted up (<< fractionnal_part) before division.*/