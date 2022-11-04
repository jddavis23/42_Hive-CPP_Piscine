/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:11:13 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/04 13:21:07 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	num = 0;
};

Fixed::Fixed(const Fixed &a)
{
	*this = a;
	return ;
};

Fixed & Fixed::operator = (const Fixed &a)
{
	this->num = a.getRawBits();
	return *this;
};

Fixed::~Fixed()
{
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
	num = a * 256;
};

Fixed::Fixed(const float a)
{
	num = roundf(a * 256.0);
};

std::ostream & operator << (std::ostream& os, const Fixed &a)
{
	os << a.getRawBits() / 256.0;
	return (os);
};

int	Fixed::operator > (const Fixed &f)
{
	if (num > f.num)
		return (1);
	return (0);
};

int	Fixed::operator < (const Fixed &f)
{
	if (num < f.num)
		return (1);
	return (0);
};

int	Fixed::operator <= (const Fixed &f)
{
	if (num <= f.num)
		return (1);
	return (0);
};

int	Fixed::operator >= (const Fixed &f)
{
	if (num >= f.num)
		return (1);
	return (0);
};

int	Fixed::operator == (const Fixed &f)
{
	if (num == f.num)
		return (1);
	return (0);
};

int	Fixed::operator != (const Fixed &f)
{
	if (num != f.num)
		return (1);
	return (0);
};

Fixed Fixed::operator / (const Fixed &f)
{
	Fixed tp (this->toFloat() / f.toFloat());
	return (tp);
};

Fixed	Fixed::operator - (const Fixed &f)
{
	Fixed tp;
	
	tp.setRawBits((this->getRawBits() - f.getRawBits()));
	return (tp);
};

Fixed Fixed::operator + (const Fixed &f)
{
	Fixed tp;
	
	tp.setRawBits((this->getRawBits() + f.getRawBits()));
	return (tp);
};

Fixed	Fixed::operator * (const Fixed &f)
{
	Fixed tp (this->toFloat() * f.toFloat());
	return (tp);
};

Fixed	&Fixed::operator ++ ()
{
	num++;
	return (*this);
};

Fixed Fixed::operator ++ (int)
{
	Fixed tp = *this;
	++num;
	return (tp);
};

Fixed	&Fixed::operator -- ()
{
	--num;
	return (*this);
};

Fixed Fixed::operator -- (int)
{
	Fixed tp = *this;
	--num;
	return (tp);
};