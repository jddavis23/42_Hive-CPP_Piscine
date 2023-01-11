/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:01:14 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/01 12:57:15 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i;

	i = 0;
	Zombie *tmp = zombieHorde(3, "CHECKing" );
	while (i < 3)
	{
		tmp[i].announce();
		++i;
	}
	delete[] tmp;
	return (0);
}