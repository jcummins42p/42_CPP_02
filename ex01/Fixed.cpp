/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:14 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/05 16:13:36 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) :
	_rawbits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int raw ) :
	_rawbits(raw * (1 << _fraction))
{
	std::cout << "Default integer constructor called" << std::endl;
}

Fixed::Fixed( float raw )
{
	_rawbits = roundf(raw * (1 << _fraction));
	std::cout << "Default float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixed ) :
	_rawbits(fixed._rawbits)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed& fixed )
{
	std::cout << "Copy assign constructor called" << std::endl;
	if (this != &fixed)
	{
		_rawbits = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<( std::ostream &os, const Fixed& fixed )
{
	os << fixed.toFloat();
	return os;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_rawbits / (float)(1 << _fraction));
}

int		Fixed::toInt( void ) const
{
	return (int)(_rawbits / (1 << _fraction));
}

void	Fixed::setRawBits( int const raw )
{
	_rawbits = raw;
}

int	Fixed::getRawBits( void ) const
{
	return _rawbits;
}
