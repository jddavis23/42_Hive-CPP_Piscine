/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:01:14 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/01 12:51:12 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie stck;
	stck.set_zombie("My name is");
	Zombie *hp = newZombie("Eminem");
	hp->announce();
	delete hp;
	stck.announce();
	return (0);
}
