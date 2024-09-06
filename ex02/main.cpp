/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 14:14:48 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "optests.hpp"

void	test_comparison_operators(Fixed &f1, Fixed &f2)
{
	test_greater(f1, f2);
	test_greater_eq(f1, f2);
	test_lesser(f1, f2);
	test_lesser_eq(f1, f2);
	test_equal(f1, f2);
	test_unequal(f1, f2);
}

void	test_arithmetic_operators(const Fixed &f1, const Fixed &f2)
{
	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
}

void	test_minmax(const Fixed &f1, const Fixed &f2)
{
	std::cout << "max is" << Fixed::max(f1, f2) << std::endl;
	std::cout << "min is" << Fixed::min(f1, f2) << std::endl;
}

int main( void )
{
	Fixed a;
	Fixed b( 10.0f );
	Fixed c( 42.42f );
	Fixed d( b );

	a = Fixed( 1234.4321f );


	std::cout 	<< "a is " << a
				//<< " with raw bits " << a.getRawBits()
				<< std::endl;
	a++;
	a++;
	a++;
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

	test_comparison_operators(a, a);
	test_arithmetic_operators(a, b);
	test_minmax(a, b);
	std::cout << "max is" << Fixed::min(a, a) << std::endl;

	return (0);
}
