/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:19:00 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/13 12:12:01 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include<iostream>
#include<cstdlib>

class Base
{
	public:
	virtual ~Base();
};

Base * generate(void);
void identify(Base* p);

#endif