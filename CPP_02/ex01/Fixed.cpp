/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:11:13 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/03 15:53:16 by jdavis           ###   ########.fr       */
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
	*this = a;
	return ;
};

Fixed & Fixed::operator = (const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = a.getRawBits();
	return *this;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const
{
	return (num);
};

void Fixed::setRawBits( int const raw )
{
	num = raw;
};

float Fixed::toFloat( void ) const
{
	return (num / 256.0);
};

int Fixed::toInt( void ) const
{
	return (num / 256);
};

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	num = a * 256;
};

Fixed::Fixed(const float a)
{
	std::cout << "Float constructor called" << std::endl;
	num = a * 256.0;
};

std::ostream & operator << (std::ostream& os, const Fixed &a)
{
	os << a.getRawBits() / 256.0;
	return (os);
};