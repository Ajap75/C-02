/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:06 by antoinejour       #+#    #+#             */
/*   Updated: 2025/01/15 11:35:05 by anastruc         ###   ########.fr       */
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

void    print_test_arithmetic(std::string sign, int c, int d, const Fixed& result, int expected_result)
{
    
    int i;
    i = 0;
    std::string test[4];
    test[0] = "+";
    test[1] = "-";
    test[2] = "*";
    test[3] = "/";

    std::cout << YELLOW << "c = " << c << " || d = " << d << RESET << std::endl;
    // std::cout << sign.c_str() << std::endl << result.toInt() << std::endl << expected_result << std::endl;
    while (i < 4)
    {
        if (!sign.compare(test[i]))
        {
        
            std::cout << YELLOW << "TEST : " << "c " << test[i] << " d" << RESET << std::endl;
            std::cout << YELLOW << "RESULT = " << result.toInt() << " EXPECTED RESULT = " << expected_result << RESET << std::endl;
            if (expected_result == result.toInt())
            std::cout <<  GREEN << "THE TEST IS VALID\n" << RESET << std::endl;
            else 
                std::cout << RED << "THE TEST IS FALSE\n" << RESET << std::endl;
            return;
        }
        i++;
    }
    if (i >= 4)
            std::cout << RED << "Only +, -, * , / can be tested\n" << RESET << std::endl;
}

int main( void )
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c (5);
Fixed d (2);
int i;
int expected_result;
Fixed result;

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

std::cout << MAGENTA << "---------------------------------------" << RESET << std::endl;
std::cout << "------Fixed_comparison_operators-------" << std::endl;
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

std::cout << MAGENTA << "---------------------------------------" << RESET << std::endl;
std::cout << "------Fixed_arithmetic_operators-------" << std::endl;
result = c + d;
expected_result = c.toInt() + d.toInt();
print_test_arithmetic("+", c.toInt(), d.toInt(), result, expected_result);
result = c - d;
expected_result = c.toInt() - d.toInt();
print_test_arithmetic("-", c.toInt(), d.toInt(), result, expected_result);
result = c * d;
expected_result = c.toInt() * d.toInt();
print_test_arithmetic("*", c.toInt(), d.toInt(), result, expected_result);
result = c / d;
expected_result = c.toInt() / d.toInt();
print_test_arithmetic("/", c.toInt(), d.toInt(), result, expected_result);

return 0;
}


