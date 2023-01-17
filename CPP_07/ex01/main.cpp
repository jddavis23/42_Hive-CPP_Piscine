/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:36:35 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/17 16:09:19 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	char arr[4];

	arr[0] = 'e';
	arr[1] = '\0';
	arr[2] = '\0';
	arr[3] = '\0';

	int stak[7];

	stak[0] = 1;
	stak[1] = 2;
	stak[2] = 0;
	stak[3] = 0;
	stak[4] = 4;
	stak[5] = 5;
	stak[6] = 6;

	
	::max(arr, (size_t)4, ::ft_print);
	std::cout << std::endl;
	::max(stak, (size_t)7, ::ft_print);

	return(0);
}