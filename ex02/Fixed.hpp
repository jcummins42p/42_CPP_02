/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:44:19 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/05 19:27:20 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed	( void );
		Fixed	( const int raw );
		Fixed	( const float raw );
		Fixed	( const Fixed &fixed );
		Fixed	&operator=( const Fixed &fixed );
		~Fixed	( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		bool	operator>( const Fixed &other ) const;
		bool	operator<( const Fixed &other ) const;
		bool	operator>=( const Fixed &other ) const;
		bool	operator<=( const Fixed &other ) const;
		bool	operator==( const Fixed &other ) const;
		bool	operator!=( const Fixed &other ) const;

		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		static const Fixed	&max( const Fixed &f1, const Fixed &f2 );
		static const Fixed	&min( const Fixed &f1, const Fixed &f2 );
		static Fixed		&max( Fixed &f1, Fixed &f2 );
		static Fixed		&min( Fixed &f1, Fixed &f2 );
	private:
		int					_rawbits;
		static const int	_fraction = 8;
} ;

std::ostream	&operator<<( std::ostream &os, const Fixed &fixed );



#endif
