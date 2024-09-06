/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optests.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:27:17 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/06 14:39:07 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "optests.hpp"
# include <iostream>

void test_greater(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		std::cout << "\tfirst is greater than second" << std::endl;
	else
		std::cout << "\tfirst is not greater than second" << std::endl;
}

void test_lesser(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		std::cout << "\tfirst is lesser than second" << std::endl;
	else
		std::cout << "\tfirst is not lesser than second" << std::endl;
}

void test_greater_eq(Fixed &f1, Fixed &f2) {
	if (f1 >= f2)
		std::cout << "\tfirst is greater than or equal to second" << std::endl;
	else
		std::cout << "\tfirst is not greater than or equal to second" << std::endl;
}

void test_lesser_eq(Fixed &f1, Fixed &f2) {
	if (f1 <= f2)
		std::cout << "\tfirst is lesser than or equal to second" << std::endl;
	else
		std::cout << "\tfirst is not lesser than or equal to second" << std::endl;
}

void test_equal(Fixed &f1, Fixed &f2) {
	if (f1 == f2)
		std::cout << "\tfirst is equal to second" << std::endl;
	else
		std::cout << "\tfirst is not equal to second" << std::endl;
}

void test_unequal(Fixed &f1, Fixed &f2) {
	if (f1 != f2)
		std::cout << "\tfirst is unequal to second" << std::endl;
	else
		std::cout << "\tfirst is not unequal to second" << std::endl;
}
