/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_increment_decrement.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:49:41 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/02 14:52:53 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"

/*The pre-increment, post-increment, pre-decrement and post-decrement operators,
that will increment or decrement the fixed point value from the smallest representable  such as 1 +  > 1.*/

Fixed& Fixed::operator++()
{
      this->FixedNumber++;
    return(*this);
}

Fixed& Fixed::operator--()
{
    this->FixedNumber--;
    return(*this);
}

Fixed Fixed::operator++(int)
{
        Fixed temp = *this;
    this->FixedNumber++;
    return(temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->FixedNumber--;
    return(temp);
    this->FixedNumber--;
    return(*this);
}

 /*Overload the pre-increment, post-increment, pre-decrement, and post-decrement operators for a class
    Overloading the pre-increment (`++obj`) and post-increment (`obj++`) operators.

    Pre-increment (`++obj`):
    - This operator modifies the object and returns a reference to the modified object.
    - Returning a reference avoids unnecessary copying and allows chaining operations
    directly on the modified object.
    Example:
    Fixed a(10);
    (++a).setValue(5); // Increments `a` and modifies it further.

    Post-increment (`obj++`):
    - This operator modifies the object but returns a copy of its state before the 
    modification. Returning a reference here would not make sense as the caller 
    expects the "old" value before the increment.
    - The `int` parameter in the post-increment signature is a convention used to 
    differentiate it from the pre-increment operator. The compiler uses this 
    convention to distinguish between the two overloads.
    Example:
    Fixed a(10);
    Fixed b = a++; // `b` gets the value of `a` before the increment.

    Summary:
    - Pre-increment returns a reference to the object (`*this`) after modification.
    - Post-increment returns a copy of the object as it was before the modification.
    

     - Pre-increment returns a reference to the object (`*this`) after modification.

    Fixed& operator++();
    Fixed& operator--();
    
     - Post-increment returns a copy of the object as it was before the modification.
    Fixed operator++(int);
    Fixed operator--(int);
    */



