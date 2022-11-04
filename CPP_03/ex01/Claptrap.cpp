/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:24:20 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/04 16:45:24 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
	this->setTrap(str, 10, 10, 0);
	// name = str;
	// hp = 10;
	// ep = 10;
	// ad = 0;
	std::cout << name << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &a)
{
	name = a.name;
	hp = a.hp;
	ep = a.ep;
	ad = a.ad;
};

ClapTrap & ClapTrap::operator = (const ClapTrap &a)
{
	if (this != &a)
	{
		name = a.name;
		hp = a.hp;
		ep = a.ep;
		ad = a.ad;
	}
	return *this;
};

ClapTrap::~ClapTrap()
{
	std::cout << name << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
	if (!possible())
		return ;
	this->cost();
	std::cout << "ClapTrap " << name << 
	" attacks " << target << ", causing " 
	<< ad << " points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!possible())
		return ;
	std::cout << "ClapTrap " << name << " takes " 
	<< amount << " points of damage!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!possible())
		return ;
	hp += amount;
	std::cout << "ClapTrap repaired " << amount << " points" << std::endl;
	this->cost();
};

void ClapTrap::cost(void)
{
	--ep;
};

int ClapTrap::possible()
{
	if (hp <= 0 || ep <= 0)
	{
		std::cout << "ClapTrap " << name << " does not have enough attack or energy pts"
		 << std::endl;
		return (0);
	}
	else
		return (1);
};

void ClapTrap::setTrap(std::string new_name, int hip, int eip, int aid)
{
	name = new_name;
	hp = hip;
	ep = eip;
	ad = aid;
};