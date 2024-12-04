/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:12 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/03 15:25:47 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

#ifndef FIXED_HPP
#define FIXED_HPP

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


    float toFloat ( void ) const;
    int toInt ( void ) const;

    /*Static member function min and max*/
    static Fixed& min(Fixed& a, Fixed& b);
    static Fixed& max( Fixed& a, Fixed& b);

    /*Overload static member function min and max with const objects as parameter and const obj as return*/
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

    /*Assignation operators declaration*/
    Fixed& operator=( const Fixed& other );
    Fixed& operator <<(const Fixed& other);


    /*Comparison operators declaration*/
    bool operator >(const Fixed& other) const;
    bool operator <(const Fixed& other) const;
    bool operator >=(const Fixed& other) const;
    bool operator <=(const Fixed& other) const;
    bool operator ==(const Fixed& other) const;
    bool operator !=(const Fixed& other) const;

    /*Arithmetic operators declaration*/
    Fixed operator +(const Fixed& other) const;
    Fixed operator -(const Fixed& other) const;
    Fixed operator *(const Fixed& other) const;
    Fixed operator /(const Fixed& other) const;

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
    */

    //    - Pre-increment returns a reference to the object (`*this`) after modification.

    Fixed& operator++();
    Fixed& operator--();
    
    //   - Post-increment returns a copy of the object as it was before the modification.
    Fixed operator++(int);
    Fixed operator--(int);

    ~Fixed();


};

std::ostream& operator <<(std::ostream& out, const Fixed& Fixed);

#endif

