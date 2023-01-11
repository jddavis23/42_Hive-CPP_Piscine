/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:57:54 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/11 12:20:31 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main (int argc, char *argv[])
{
	t_flags test;
	Convert scal;

	if (argc != 2)
	{
		std::cout << "Incorrect args\n";
		return 1;
	}
	test = scal.detect(argv[TRUE]);
	scal.printTest(test);
	return 0;
}