/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:44:19 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/05 16:06:09 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	private:
		int					_rawbits;
		static const int	_fraction = 8;
} ;

std::ostream	&operator<<( std::ostream &os, const Fixed& fixed );
