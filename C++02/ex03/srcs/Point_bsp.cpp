/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point_bsp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:29:00 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/04 13:12:56 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Point.hpp"
#include <cmath>

float calculateArea(const Point& a, const Point& b, const Point& c) 
{
    /*Extract the x and y coordinates of each point */
    float a_x = a.getX().toFloat();
    float a_y = a.getY().toFloat();
    float b_x = b.getX().toFloat();
    float b_y = b.getY().toFloat();
    float c_x = c.getX().toFloat();
    float c_y = c.getY().toFloat();

    /*Calculate the area using the formula with roundf */
    float area = 0.5f * std::abs(roundf(a_x * (b_y - c_y) +
                                        b_x * (c_y - a_y) +
                                        c_x * (a_y - b_y)));
    return area;
}



bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    /* Calculate the area of the triangle formed by the vertices a, b, and c */
    float abc_area = calculateArea(a, b, c);

   /* Calculate the areas of the sub-triangles formed by point and each pair of vertices */
    float abp_area = calculateArea(a, b, point);
    float acp_area = calculateArea(a, c, point);
    float bcp_area = calculateArea(b, c, point);

    /* Tolerance to handle floating-point precision errors */
    const float epsilon = 0.00001f;

    /* Check if the sum of sub-triangle areas equals the original triangle's area */
    if (std::abs(abc_area - (abp_area + acp_area + bcp_area)) > epsilon)
        return false;

    /* Check if the point lies exactly on one of the edges or vertices (should return false in this case) */
    if (abp_area < epsilon || acp_area < epsilon || bcp_area < epsilon)
        return false;

    /* The point is inside the triangle if none of the above conditions are true */
    return true;
}

