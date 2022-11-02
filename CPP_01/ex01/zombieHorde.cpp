/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:23:36 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/01 12:53:20 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie*    zombieHorde( int N, std::string name )
 {
	Zombie *horde;
	int i;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].set_zombie(name);
		++i;
	}
	return (horde);
 }