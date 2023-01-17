/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:35:56 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/17 17:39:21 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>Array<T>::Array()
{
	ptr = new T[0];
	size = 0;
};

template <typename T>Array<T>::Array(unsigned int n)
{
	ptr = new T[n];
    size = n;
};

template <typename T>Array<T>::Array(const Array &a)
{
	unsigned int i;

	i = 0;
	size = a.getSize();
	ptr = new T[size];
	while (i < size)
	{
		this->ptr[i] = a.ptr[i];
		++i;
	}
};

template <typename T> Array<T> & Array<T>::operator = (const Array &a) const
{
	if (*this != &a)
	{
		int i;

		i = 0;
		size = a->getSize();
		ptr = new T[size];
		while (i < size)
		{
			this->ptr[i] = a.ptr[i];
			++i;
		}
	}
	return &this;
};

template <typename T>Array<T>::~Array()
{
	delete[] ptr; 
};

template <typename T>unsigned int Array<T>::getSize() const
{
	return size;
};

template <typename T> T Array<T>::operator [] (unsigned int a)
{
	try
	{
		if (a >= this->getSize())
			throw Array::err();
		return this->ptr[a];
	}
	catch (std::exception &a)
	{
		std::cout << a.what();
	}
	return 0;
};
template <class T>
void    Array<T>::setArray(int elem, T value)
{
    (*this).ptr[elem] = value;
}

template <class T>
void    Array<T>::getArray(void)
{
    unsigned int    i;

    i = 0;
    while (i < (*this).getSize())
    {
        std::cout << (*this).ptr[i] << "->";
        ++i;
    }
    std::cout << std::endl;
}