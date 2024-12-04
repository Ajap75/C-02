/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_constructors.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:41:18 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/02 14:47:13 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"

// Constructor
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
    FixedNumber = roundf(floating_value * (1 << fractionnal_part));
}

// Copy constructor with assignation list 
Fixed::Fixed (const Fixed& other) : FixedNumber (other.FixedNumber)
{
    std::cout << "Copy Constructor called" << std::endl;
}

/* Assignation operator definition*/
Fixed& Fixed::operator =(const Fixed& other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->FixedNumber = other.FixedNumber; 
    }
    return(*this);
}

// Destructor
Fixed::~Fixed () 
{
    std::cout << "Destructor called" << std::endl;
}