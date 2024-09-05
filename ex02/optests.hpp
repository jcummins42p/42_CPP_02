/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpTests.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:35:10 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/05 17:42:34 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTESTS_HPP
# define OPTESTS_HPP

void test_greater(Fixed &f1, Fixed &f2);
void test_lesser(Fixed &f1, Fixed &f2);
void test_greater_eq(Fixed &f1, Fixed &f2);
void test_lesser_eq(Fixed &f1, Fixed &f2);
void test_equal(Fixed &f1, Fixed &f2);
void test_unequal(Fixed &f1, Fixed &f2);

#endif
