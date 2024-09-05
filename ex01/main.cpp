/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/05 16:35:48 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout 	<< "a is " << a
				//<< " with raw bits " << a.getRawBits()
				<< std::endl;
	std::cout 	<< "b is " << b
				//<< " with raw bits " << b.getRawBits()
				<< std::endl;
	std::cout 	<< "c is " << c
				//<< " with raw bits " << c.getRawBits()
				<< std::endl;
	std::cout 	<< "d is " << d
		//<< " with raw bits " << d.getRawBits()
				<< std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}
