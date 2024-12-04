/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_comparison_operators.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:45:39 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/03 15:31:00 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"

/* Comparison operator definition */

bool Fixed::operator >(const Fixed& other) const 
{
    std::cout << "Superior operator called" << std::endl;
    return (FixedNumber > other.FixedNumber);
}

bool Fixed::operator <(const Fixed& other) const
{
    std::cout << "Inferior operator called" << std::endl;
    return (FixedNumber < other.FixedNumber);
}

bool Fixed:: operator >=(const Fixed& other) const
{
    std::cout << "Superior or equal operator called" << std::endl;
    return(FixedNumber >= other.FixedNumber);
}

bool Fixed::operator <=(const Fixed& other) const
{
    std::cout << "Inferior or equal operator called" << std::endl;
    return(FixedNumber <= other.FixedNumber);
}

bool Fixed:: operator ==(const Fixed& other) const
{
    std::cout << "equal operator called" << std::endl;
    return (FixedNumber == other.FixedNumber);
}

bool Fixed:: operator != (const Fixed& other) const
{
    std::cout << "Different operator called" << std::endl;
    return (FixedNumber != other.FixedNumber);
}
