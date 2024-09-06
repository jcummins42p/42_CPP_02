/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 14:42:19 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "optests.hpp"

void	test_comparison_operators(Fixed &f1, Fixed &f2)
{
	std::cout	<< "Demonstrating comparison operators:" << std::endl;
	test_greater(f1, f2);
	test_greater_eq(f1, f2);
	test_lesser(f1, f2);
	test_lesser_eq(f1, f2);
	test_equal(f1, f2);
	test_unequal(f1, f2);
	std::cout	<< std::endl;
}

void	test_arithmetic_operators(const Fixed &f1, const Fixed &f2)
{
	std::cout	<< "Demonstrating arithmetic operators:" << std::endl
				<< "\t" << f1 << " + " << f2 << " = " << f1 + f2 << std::endl
				<< "\t" << f1 << " - " << f2 << " = " << f1 - f2 << std::endl
				<< "\t" << f1 << " * " << f2 << " = " << f1 * f2 << std::endl
				<< "\t" << f1 << " / " << f2 << " = " << f1 / f2 << std::endl
				<< std::endl;
}

void	test_minmax(const Fixed &f1, const Fixed &f2)
{
	std::cout	<< "Demonstrating toInt:" << std::endl
				<< "\tmax is" << Fixed::max(f1, f2) << std::endl
				<< "\tmin is" << Fixed::min(f1, f2) << std::endl
				<< std::endl;
}

void	test_show_int(const Fixed &a, const Fixed &b, const Fixed &c, const Fixed &d)
{
	std::cout	<< "Demonstrating toInt:" << std::endl;
	std::cout 	<< "\ta is " << a.toInt() << " as integer" << std::endl
				<< "\tb is " << b.toInt() << " as integer" << std::endl
				<< "\tc is " << c.toInt() << " as integer" << std::endl
				<< "\td is " << d.toInt() << " as integer" << std::endl
				<< std::endl;
}

void	test_show_fl(const Fixed &a, const Fixed &b, const Fixed &c, const Fixed &d)
{
	std::cout	<< "Demonstrating << overload and toFloat:" << std::endl
				<< "\ta is " << a
				//<< " with raw bits " << a.getRawBits()
				<< std::endl
				<< "\tb is " << b
				//<< " with raw bits " << b.getRawBits()
				<< std::endl
				<< "\tc is " << c
				//<< " with raw bits " << c.getRawBits()
				<< std::endl
				<< "\td is " << d
				//<< " with raw bits " << d.getRawBits()
				<< std::endl
				<< std::endl;
}

void	test_incr_decr(Fixed &f1)
{
	std::cout	<< "Demonstrating increment / decrement:" << std::endl
				<< "\tFixed before operation is " << f1
				//<< " with raw bits " << a.getRawBits()
				<< std::endl;
	for (int i = 0; i < 10; i++)
		--f1;
	std::cout 	<< "\tFixed after operation is " << f1
				//<< " with raw bits " << a.getRawBits()
				<< std::endl << std::endl;
}

int main( void )
{
	Fixed a;
	Fixed b( 10.0f );
	Fixed c( 42.42f );
	Fixed d( b );

	a = Fixed( 1234.4321f );

	test_show_fl(a, b, c, d);
	test_show_int(a, b, c, d);
	test_incr_decr(a);
	test_comparison_operators(a, a);
	test_arithmetic_operators(a, b);
	test_minmax(a, b);

	return (0);
}
