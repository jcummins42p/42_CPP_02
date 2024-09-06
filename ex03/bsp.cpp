/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:50:12 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 15:37:48 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	triangle_area( Point const a, Point const b, Point const c)
{
	//std::cout 	<< "Calculating triangle area for triangle: " << std::endl
				//<< a.x() << "," << a.y() << " / "
				//<< b.x() << "," << b.y() << " / "
				//<< c.x() << "," << c.y() <<	std::endl;
	Fixed output(a.x() * (b.y() - c.y())
				+ b.x() * (c.y() - a.y())
				+ c.x() * (a.y() - b.y()));
	//std::cout	<< "The area is: " << output / 2 << std::endl;
	if (output < 0)
		output = Fixed(0) - output;
	return (output / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A = triangle_area(a, b, c);
	Fixed	A1 = triangle_area(point, a, b);
	Fixed	A2 = triangle_area(point, b, c);
	Fixed	A3 = triangle_area(point, c, a);
	//std::cout 	<< "To be within the triangle, "
				//<< A << " should be equal to "
				//<< A1 << " + "
				//<< A2 << " + "
				//<< A3 << std::endl;
	return (A == (A1 + A2 + A3));
}
