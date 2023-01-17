/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:13:59 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/17 16:04:07 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T, size_t N> void max(T (&x)[N], std::size_t sz, void (*par)(const T &x))
{
	size_t i;
	
	i = 0;
	while (i < sz)
	{
		par(x[i]);
		++i;
	}
};

template<typename T>void ft_print(T &i)
{
	if (i)
		std::cout << "TRUE\n";
};


#endif