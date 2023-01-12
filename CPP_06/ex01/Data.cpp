/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:55:43 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/12 17:05:50 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : i(0) {}

Data::Data(const Data &a)
{
	i = a.i;
};

Data & Data::operator = (const Data &a)
{
	if (this != &a)
	{
		i = a.i;
	}
	return *this;
};

Data::~Data()
{
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t j;

	j = reinterpret_cast<std::uintptr_t>(ptr);
	return j;
};

Data* deserialize(uintptr_t raw)
{
	Data *j;

	j =  reinterpret_cast<Data *>(raw);
	return j;
};