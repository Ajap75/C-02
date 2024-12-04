/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point_constructors.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:57:11 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/03 16:22:05 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Point.hpp"

    // Point& operator =(const Point& other); //  An assignation operator overload.

Point::Point() : x(0), y(0) {} // A default constructor that initializes x and y to 0.

Point::~Point() {} // destructor

Point::Point(const Point& other) : x(other.x), y(other.y) {}      // Point(const Point& other); // copy constructor

Point::Point(const float x_param, const float y_param) : x(x_param), y(y_param) {} // A constructor that takes two constant floating points as parameters and that initializes x and y with those values.

