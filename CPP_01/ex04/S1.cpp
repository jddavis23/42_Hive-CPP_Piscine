/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   S1.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:22:46 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 13:42:13 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "S1.hpp"

S1::S1(std::string s)
{
	str = s;
};

std::string S1::getS1()
{
	return (str);
};

std::string S1::setNew(S2 c)
{
	return (c.getS2());
};

S1::~S1()
{
};