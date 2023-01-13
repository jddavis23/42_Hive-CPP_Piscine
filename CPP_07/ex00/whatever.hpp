/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:32:07 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/13 13:00:43 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T &a, T &b)
{
	T c;
	c = b;
	b = a;
	a = c;
};

template<typename T> T min(T &a, T &b)
{
	return (a >= b ? b : a);
};

template<typename T> T max(T &a, T &b)
{
	return (a < b ? a : b);
};

#endif