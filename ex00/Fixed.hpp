/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:44:19 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/09 17:57:37 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Fixed
{
	public:
		Fixed	( void );
		Fixed	( const Fixed &fixed );
		Fixed	&operator=( const Fixed &fixed );
		~Fixed	( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					_rawbits;
		static const int	_fraction = 8;
} ;
