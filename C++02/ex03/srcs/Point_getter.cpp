/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point_getter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:56:34 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/03 17:10:27 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Point.hpp"

const Fixed& Point::getX() const
{
    return (this->x);
}

const Fixed& Point::getY() const
{
    return (this->y);
}
