/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:41:25 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 11:26:05 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon
{
	std::string type;
	public:
	Weapon();
	Weapon(std::string str);
	const std::string	getType();
	void	setType(std::string str);
	~Weapon();
};

#endif