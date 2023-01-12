/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:59:51 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/12 17:06:36 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data i;
	Data * j = &i;
	uintptr_t p;

	std::cout << j << std::endl;
	p = serialize(j);
	j = deserialize(p);
	std::cout << j << "\n"  << p << std::endl;
	
	return 0;
}