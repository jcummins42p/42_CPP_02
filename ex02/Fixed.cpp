/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:14 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/09 21:45:15 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) :
	_rawbits(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int raw ) :
	_rawbits(raw * (1 << _fraction))
{
	//std::cout << "Default integer constructor called" << std::endl;
}

Fixed::Fixed( float raw )
{
	_rawbits = roundf(raw * (1 << _fraction));
	//std::cout << "Default float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixed ) :
	_rawbits(fixed._rawbits)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed& fixed ) {
	//std::cout << "Copy assign constructor called" << std::endl;
	if (this != &fixed)
	{
		_rawbits = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void ) {
	//std::cout << "Destructor called" << std::endl;
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
	Fixed	output;
	output.setRawBits((this->_rawbits * other._rawbits) >> _fraction);
	return (output);
}

Fixed	Fixed::operator/( const Fixed &other ) const {
	Fixed	output;
	output.setRawBits((this->_rawbits << _fraction) / other._rawbits);
	return (output);
}

Fixed	&Fixed::operator++( void ) {
	_rawbits += 1;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	temp = *this;
	_rawbits += 1;
	return temp;
}

Fixed	&Fixed::operator--( void ) {
	_rawbits -= 1;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	Fixed	temp = *this;
	_rawbits -= 1;
	return temp;
}
