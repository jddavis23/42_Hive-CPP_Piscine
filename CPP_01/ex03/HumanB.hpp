/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:05:10 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 11:33:27 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string name;
	Weapon *wep;
	public:
	HumanB(std::string str);
	void	setWeapon(Weapon &tp);
	void	attack(void);
	~HumanB();
};

#endif