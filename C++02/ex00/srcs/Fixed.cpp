/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:10 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/14 12:38:52 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"

// Constructeur / Destructeur
Fixed::Fixed () : FixedNumber(0) 
{
std::cout << "Default constructor called" << std::endl;
}

// Constucteur de copie 
Fixed::Fixed (const Fixed& other) : FixedNumber (other.getRawBits())
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
        this->FixedNumber = other.getRawBits(); 
    }
    return(*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(FixedNumber);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    FixedNumber = raw;
}


/*Défintion des attribut statique de la classe. Ne pas remettre statique lors
 de la définition ici car on ne veut pas limiter la porter de la variable*/
 
int const Fixed::fractionnal_part = 8;
