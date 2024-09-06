/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:49:12 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 13:52:21 by jcummins         ###   ########.fr       */
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
	private:
		const Fixed	_x;
		const Fixed	_y;
} ;

#endif
