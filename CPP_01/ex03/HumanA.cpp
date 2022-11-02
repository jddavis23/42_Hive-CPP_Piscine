/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:05:02 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 11:30:14 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon &w)
{
	name = nm;
	wep = &w;
};

void	HumanA::attack(void)
{
	std::string tmp;

	tmp = (wep)->getType();
	std::cout << name << " attacks with their " << tmp << "\n";
};

HumanA::~HumanA()
{
};