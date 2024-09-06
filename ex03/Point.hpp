/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:49:12 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 15:10:47 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point &point );
		//Point &operator=( const Point &point );
		~Point( void );

		const	Fixed &x( void ) const;
		const	Fixed &y( void ) const;
	private:
		const Fixed	_x;
		const Fixed	_y;
} ;

Fixed	triangle_area( Point const a, Point const b, Point const c);
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
