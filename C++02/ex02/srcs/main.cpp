/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:06 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/14 18:50:14 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "../headers/Colors.hpp"

void    print_test(int i, const char *test, int c, int d)
{
    std::cout << YELLOW << "c = " << c << " || d = " << d << std::endl;
    if (i == 1)
        std::cout << YELLOW << "TEST : " << test << GREEN << "IS TRUE\n" << RESET << std::endl;
    else 
        std::cout << YELLOW << "TEST : " << test << RED << "IS FALSE\n" << RESET << std::endl;
}

void    print_test_arithmetic(std::string test, int c, int d, const Fixed& result)
{
    std::cout << YELLOW << "c = " << c << " || d = " << d << RESET << std::endl;
    if (!test.compare("+"))
    {
        test = "c + d\n";
        if (c + d == result.toInt())
        {  
            std::cout << YELLOW << "TEST : " << test << GREEN << "IS TRUE\n" << RESET << std::endl;
        }
        else 
            std::cout << YELLOW << "TEST : " << test << RED << "IS FALSE\n" << RESET << std::endl;
    }
    else
        
}

int main( void )
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c (5);
Fixed d (2);
int i;
Fixed result;

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

std::cout << "----------" << std::endl;
std::cout << "------FFixed_comparison_operators-------" << std::endl;
i = c > d;
print_test(i, "c > d\n", c.toInt(), d.toInt());
i = c < d;
print_test(i, "c < d\n", c.toInt(), d.toInt());
i = c >= d;
print_test(i, "c >= d\n", c.toInt(), d.toInt());
i = c <= d;
print_test(i, "c <= d\n", c.toInt(), d.toInt());
i = c == d;
print_test(i, "c == d\n", c.toInt(), d.toInt());
i = c != d;
print_test(i, "c != d\n", c.toInt(), d.toInt());

std::cout << "----------" << std::endl;
std::cout << "------Fixed_arithmetic_operators-------" << std::endl;
result = c + d;
print_test_arithmetic("+", c.toInt(), d.toInt(), result);
result = c - d;
print_test_arithmetic("-", c.toInt(), d.toInt(), result);
result = c * d;
print_test_arithmetic("*", c.toInt(), d.toInt(), result);
result = c / d;
print_test_arithmetic("/", c.toInt(), d.toInt(), result);


return 0;
}


