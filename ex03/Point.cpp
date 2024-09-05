/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:48:36 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/05 20:07:10 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point( void ) :
	_x(0),
	_y(0) {
	std::cout << "point created with default 0, 0 values" << std::endl;
}

Point::Point( const Point &point ) :
	_x(point._x),
	_y(point._y) {
	std::cout 	<< "point created with copied "
				<< _x << ", " << _y << " values" << std::endl;
}

Point &Point::operator=( const Point &point )
{
	if (this != &point)
	{
		_x = point._x;
		_y = point._y;
	}
	return (*this);
}

Point::~Point( void ) {
	std::cout << "point destroyed" << std::endl;
}
