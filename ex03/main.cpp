/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:42 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 15:38:00 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(0, 0);
	Point b(0, 10);
	Point c(10, 0);

	Point test(9.9f, 0);
	if (bsp(a, b, c, test))
		std::cout << "Bsp indicates the point is within the triangle.\n";
	else
		std::cout << "Bsp indicates the point is NOT within the triangle.\n";

	return (0);
}
