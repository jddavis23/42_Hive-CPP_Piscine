/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:11:13 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/03 13:13:37 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	num = 0;
};

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	num = a.num;
};

Fixed & Fixed::operator = (const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		num = a.num;
	}
	return *this;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
};

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
};

float Fixed::toFloat( void ) const
{
	return (num);
};

int Fixed::toInt( void ) const
{
	return (num);
};

Fixed::Fixed(const int a)
{
	num = a;
};

Fixed::Fixed(const float a)
{
	num = a;
};

std::ostream & Fixed::operator << (std::ostream& os, const Fixed &a)
{
	os << static_cast<float>(a.num);
	return (os);
};