/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:08:53 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 11:33:33 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	name = str;
};

void	HumanB::setWeapon(Weapon &tp)
{
	wep = &tp;
};

void	HumanB::attack(void)
{
	std::string tmp;

	tmp = wep->getType();
	std::cout << name << " attacks with their " << tmp << "\n";
};

HumanB::~HumanB()
{
};