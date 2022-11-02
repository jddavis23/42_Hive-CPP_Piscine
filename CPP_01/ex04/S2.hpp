/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   S2.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:34:36 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 13:41:18 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S2_HPP
#define S2_HPP

#include <iostream>
#include <string>
#include "S1.hpp"

class S2
{
	std::string str;
	public:
	S2(std::string s);
	std::string getS2();
	~S2();
};

#endif