/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:14 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 13:54:53 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) :
	_rawbits(0)
{
	//std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::Fixed( int raw ) :
	_rawbits(raw * (1 << _fraction))
{
	//std::cout << "Fixed default integer constructor called" << std::endl;
}

Fixed::Fixed( float raw )
{
	_rawbits = roundf(raw * (1 << _fraction));
	//std::cout << "Fixed default float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixed ) :
	_rawbits(fixed._rawbits)
{
	//std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed& fixed ) {
	//std::cout << "Fixed copy assign constructor called" << std::endl;
	if (this != &fixed)
	{
		_rawbits = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void ) {
	//std::cout << "Fixed destructor called" << std::endl;
}

int		Fixed::toInt( void ) const {
	return (int)(_rawbits / (1 << _fraction));
}

float	Fixed::toFloat( void ) const
{
	return ((float)_rawbits / (float)(1 << _fraction));
}

void	Fixed::setRawBits( int const raw ) {
	_rawbits = raw;
}

int	Fixed::getRawBits( void ) const {
	return _rawbits;
}

std::ostream &operator<<( std::ostream &os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return os;
}

bool	Fixed::operator>( const Fixed& other) const {
	return this->toFloat() > other.toFloat();
}

bool	Fixed::operator<( const Fixed& other) const {
	return this->toFloat() < other.toFloat();
}

bool	Fixed::operator>=( const Fixed& other) const {
	return this->toFloat() >= other.toFloat();
}

bool	Fixed::operator<=( const Fixed& other) const {
	return this->toFloat() <= other.toFloat();
}

bool	Fixed::operator==( const Fixed& other) const {
	return this->toFloat() == other.toFloat();
}

bool	Fixed::operator!=( const Fixed& other) const {
	return this->toFloat() != other.toFloat();
}

const Fixed	&Fixed::max( const Fixed &f1, const Fixed &f2 ) {
	std::cout << ", using const min function, ";
	return (f1 > f2) ? f1 : f2;
}

const Fixed	&Fixed::min( const Fixed &f1, const Fixed &f2 ) {
	std::cout << ", using const max function, ";
	return (f1 < f2) ? f1 : f2;
}

Fixed	&Fixed::max( Fixed &f1, Fixed &f2 ) {
	std::cout << ", using non-const max function, ";
	return (f1 > f2) ? f1 : f2;
}

Fixed	&Fixed::min( Fixed &f1, Fixed &f2 ) {
	std::cout << ", using non-const min function, ";
	return (f1 < f2) ? f1 : f2;
}

Fixed	Fixed::operator+( const Fixed &other ) const {
	Fixed	output;
	output.setRawBits(this->_rawbits + other.getRawBits());
	return (output);
}

Fixed	Fixed::operator-( const Fixed &other ) const {
	Fixed	output;
	output.setRawBits(this->_rawbits - other.getRawBits());
	return (output);
}

Fixed	Fixed::operator*( const Fixed &other ) const {
	Fixed	output(this->toFloat() * other.toFloat());
	return (output);
}

Fixed	Fixed::operator/( const Fixed &other ) const {
	Fixed	output(this->toFloat() / other.toFloat());
	return (output);
}

