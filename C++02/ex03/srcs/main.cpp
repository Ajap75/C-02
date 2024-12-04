/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:31:06 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/04 13:43:11 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "string"
#include "iostream"
#include "../headers/Point.hpp"

void bspTest ()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point Inside (3, 3);
    std::cout << "Point Inside : " << (Point::bsp(a, b, c, Inside) ? "True" : "False") << std::endl;

    Point onEdge(5, 0);
    std::cout << "Point on edge: " << (Point::bsp(a, b, c, onEdge) ? "True" : "False") << std::endl;

    // At a vertex of the triangle
    Point onVertex(0, 0);
    std::cout << "Point on vertex: " << (Point::bsp(a, b, c, onVertex) ? "True" : "False") << std::endl;

    // Outside the triangle
    Point outside(15, 15);
    std::cout << "Point outside: " << (Point::bsp(a, b, c, outside) ? "True" : "False") << std::endl;

    // Near the edge but outside (precision test)
    Point nearOutsideEdge(10.0001, -0.0001);
    std::cout << "Point near edge (outside): " << (Point::bsp(a, b, c, nearOutsideEdge) ? "True" : "False") << std::endl;
}

int main ()
{
    bspTest();
    return (0);
}