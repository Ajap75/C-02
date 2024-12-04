/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:35:41 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/04 13:19:24 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "Fixed.hpp"


#ifndef POINT_HPP
#define POINT_HPP

class Point
{
    private :

    const Fixed x;
    const Fixed y;
    Point& operator =(const Point& other); //  An assignation operator overload.

    /*
    In this class, the assignation operator is explicitly disabled by declaring it as a 
    private member and not defining it. This is because the members `x` and `y` are 
    declared as `const`. Constant members cannot be reassigned after being initialized, 
    which makes the use of an assignation operator logically invalid.

    By declaring the assignation operator as private and leaving it undefined, we ensure 
    that no code can accidentally attempt to reassign `const` members, preventing both 
    compiler and runtime issues. 

    This design emphasizes the immutability of objects of this class: once constructed, 
    their state cannot be changed. Instead of assigning between existing objects, a new 
    object must be created using the copy constructor or other appropriate means.
    */

    public :
    
    Point(); // A default constructor that initializes x and y to 0.
    ~Point(); // destructor
    Point(const Point& other); // copy constructor
    Point(const float x_param, const float y_param); // A constructor that takes two constant floating points as parameters and that initializes x and y with those values.


   const Fixed& getX() const; // usefull getter
   const Fixed& getY() const;

   static bool bsp( Point const a, Point const b, Point const c, Point const point); // BSP stands for Binary space partitioning.
};

#endif