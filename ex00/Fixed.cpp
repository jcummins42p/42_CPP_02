/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:14 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/05 10:28:56 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ) :
	_rawbits(0)
{
	std::cout << "Default constructor called" << std::endl;
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

void	Fixed::setRawBits( int const raw )
{
	_rawbits = raw;
}

int	Fixed::getRawBits( void ) const
{
	return _rawbits;
}
