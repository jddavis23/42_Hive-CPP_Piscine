/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:11:10 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 11:12:58 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
};

Weapon::Weapon(std::string str)
{
	type = str;
};

const std::string	Weapon::getType()
{
	return (type);
};

void	Weapon::setType(std::string str)
{
	type = str;
};

Weapon::~Weapon()
{
};
