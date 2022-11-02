/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   S1.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:30:55 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/02 15:45:17 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S1_HPP
#define S1_HPP

#include <iostream>
#include <string>
#include "S2.hpp"

class S1
{
	std::string str;
	public:
	S1(std::string s);
	std::string getS1();
	std::string setNew(S2 c);
	~S1();
};

#endif