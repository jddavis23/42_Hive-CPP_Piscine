/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:41:46 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/13 12:45:30 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 10, b = 5;
	swap<int>(a, b);
	std::cout << a << " " << b << std::endl;
	return 0;
}