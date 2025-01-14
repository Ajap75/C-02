/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:10 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/18 17:51:41 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"

// Constructeur / Destructeur
Fixed::Fixed () : FixedNumber(0) 
{
std::cout << "Default constructor called" << std::endl;
}

/*• A constructor that takes a constant integer as a parameter and that converts it to
the correspondant fixed(8) point value. The fractional bits value is initialized like
in ex00.*/

Fixed::Fixed(const int integer_value)
{
    std::cout << "Int constructor called" << std::endl;
    FixedNumber = integer_value << fractionnal_part;
}

/*A constructor that takes a constant floating point as a parameter and that converts
it to the correspondant fixed(8) point value. The fractional bits value is initialized
like in ex00.*/

Fixed::Fixed(const float floating_value)
{
    std::cout << "Float constructor called" << std::endl;
    FixedNumber = roundf((floating_value * (1 << fractionnal_part)));
}

// Constucteur de copie 
Fixed::Fixed (const Fixed& other) : FixedNumber (other.FixedNumber)
{
    std::cout << "Copy Constructor called" << std::endl;
}
Fixed::~Fixed () 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator =(const Fixed& other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->FixedNumber = other.FixedNumber; 
    }
    return(*this);
}

/*A member function float toFloat( void ) const; that converts the fixed point
value to a floating point value. cf comment below*/

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

/*You will also add the following function overload to your header (declaration) and
source (definition) files:
• An overload to the « operator that inserts a floating point representation of the
fixed point value into the parameter output stream.*/

std::ostream& operator <<(std::ostream& out, const Fixed& Fixed)
{
    out << Fixed.toFloat();
    return (out);
}




/*Défintion des attribut statique de la classe. Ne pas remettre statique lors
 de la définition ici car on ne veut pas limiter la porter de la variable*/
 
int const Fixed::fractionnal_part = 8;




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