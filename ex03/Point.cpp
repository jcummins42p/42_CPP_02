/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:48:36 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 15:19:36 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point( void ) :
	_x(0),
	_y(0) {
	//std::cout << "Point created with default 0, 0 values" << std::endl;
}

Point::Point( const float x, const float y ) :
	_x(x),
	_y(y) {
	//std::cout 	<< "Point created with new "
				//<< _x << ", " << _y << " values" << std::endl;
}

Point::Point( const Point &point ) :
	_x(point._x),
	_y(point._y) {
	//std::cout 	<< "Point created with copied "
				//<< _x << ", " << _y << " values" << std::endl;
}

//	Cannot make a copy assignment constructor because fixed are defined as const
//	const values must be set a t initialization and cannot be copied
//Point &Point::operator=( const Point &point )
//{
	//if (this != &point)
	//{
		//_x = point._x;
		//_y = point._y;
	//}
	//return (*this);
//}

const Fixed &Point::x( void ) const {
	return _x;
}

const Fixed &Point::y( void ) const {
	return _y;
}

Point::~Point( void ) {
	//std::cout << "Point destroyed" << std::endl;
}
