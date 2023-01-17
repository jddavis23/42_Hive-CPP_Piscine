/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:12:20 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/17 17:38:49 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
	T *ptr;
	unsigned int size;
	public:
	class err : public std::exception
	{
		virtual const char * what() const throw()
		{
			return "Error element out of bounds\n";
		}
	};
	Array();
	Array(unsigned int n);
	Array(const Array &a);
	Array & operator = (const Array &a) const;
	T operator [] (unsigned int a);
	~Array();
	void setArray(int elem, T value);
	void getArray(void);
	unsigned int getSize() const;
};

#endif