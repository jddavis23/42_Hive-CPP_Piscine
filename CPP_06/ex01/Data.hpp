/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:42:10 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/12 16:52:49 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
//#include<cstdint>
class Data
{
	protected:
	int i;
	public:
	Data();
	Data(const Data &a);
	Data & operator = (const Data &a);
	~Data();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif