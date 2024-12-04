/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_output.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:00:46 by antoinejour       #+#    #+#             */
/*   Updated: 2024/12/03 15:05:54 by antoinejour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "../headers/Fixed.hpp"
#include "cmath"


/*You will also add the following function overload to your header (declaration) and
source (definition) files:
• An overload to the « operator that inserts a floating point representation of the
fixed point value into the parameter output stream.*/

std::ostream& operator <<(std::ostream& out, const Fixed& Fixed)
{
    out << Fixed.toFloat();
    return (out);
}
