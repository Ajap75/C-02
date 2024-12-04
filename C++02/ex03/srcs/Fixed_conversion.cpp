/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_conversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:56:47 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/03 15:31:12 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"


float Fixed::toFloat( void ) const
{
    float float_value;

    float_value = static_cast<float>(Fixed::FixedNumber) / (1 << Fixed::fractionnal_part);

    return (float_value);
}

/*A member function int toInt( void ) const; that converts the fixed point value
to an integer value. cf comment below*/

int Fixed::toInt( void ) const
{
    int int_original;

    int_original = FixedNumber >> fractionnal_part;

    return (int_original);
}

/*
Convert integer to fixed-point

int fractional_bits = 8;
int integer_value = 42;
int fixed_point_value = integer_value << fractional_bits;



Retrieve integer part If you have a fixed-point number and want to retrieve the original integer:

int original_integer = fixed_point_value >> fractional_bits; // Divide by 2^8
std::cout << "Original integer: " << original_integer << std::endl;
// Output: 42


Retrieve fractional part You can extract the fractional part by masking the lower bits:

int fractional_part = fixed_point_value & ((1 << fractional_bits) - 1);
std::cout << "Fractional part: " << fractional_part << std::endl;

--------------------------------------------------------------

Convert Floating-point to fixed-point:

If you want to work with floating-point numbers in a fixed-point context, you'll need to:

Multiply the floating-point number by 
2^𝑛 where 𝑛 is the number of fractional bits.
Convert the result to an integer to store it in fixed-point format.

int fixed_point_value = static_cast<int>(float_value * (1 << fractional_bits));



Convert Fixed Point integer to float : 

Steps to Implement toFloat
Understand the Conversion:

The fixed-point value is stored as an integer, scaled by 2^fractional_bits
To convert it back to a floating-point value:
Divide the stored integer by 2^fractional_bits.
This gives you the original floating-point representation.
Signature of the Function: The function returns a float and is declared as const because it does not modify the object's state.

float Fixed::toFloat( void ) const {
Divide the fixed-point value by 2^fractional_bits to get the float value
return static_cast<float>(_fixedNumber) / (1 << fractional_bits);
*/