/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_min_max.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:53:36 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/02 14:56:16 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"


/*Défintion des attributs statiques de la classe. Ne pas remettre static lors
 de la définition ici car on ne veut pas limiter la porter de la variable*/
 
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return(b);
    else 
        return(a);
}

Fixed& Fixed::max (Fixed& a, Fixed& b)
{
    if (a > b)
        return(a);
    else 
        return(b);
}


/*Overloaded of min and max function for const version*/

const Fixed& Fixed::max (const Fixed& a, const Fixed& b)
{
     if (a > b)
        return(a);
    else 
        return(b);
}

const Fixed& Fixed::min (const Fixed& a, const Fixed& b)
{
    if (a > b)
        return(b);
    else 
        return(a);
}

