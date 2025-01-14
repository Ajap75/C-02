/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:06 by antoinejour       #+#    #+#             */
/*   Updated: 2024/11/18 16:45:05 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"

int main( void ) {
Fixed a; // call the default constructor 
Fixed const b( 10 ); // call the Int constructor 
Fixed const c( 42.42f ); // call the Float Constructor 
Fixed const d( b ); // call the copy constructor:
a = Fixed( 1234.4321f ); // call the assignation operator
std::cout << "a is " << a << std::endl; // call the insertion operator
std::cout << "b is " << b << std::endl; // call the insertion operator
std::cout << "c is " << c << std::endl; // call the insertion operator
std::cout << "d is " << d << std::endl; // call the insertion operator
std::cout << "a is " << a.toInt() << " as integer" << std::endl; // call the insertion operator
std::cout << "b is " << b.toInt() << " as integer" << std::endl; // call the insertion operator
std::cout << "c is " << c.toInt() << " as integer" << std::endl; // call the insertion operator
std::cout << "d is " << d.toInt() << " as integer" << std::endl; // call the insertion operator
return 0;
}