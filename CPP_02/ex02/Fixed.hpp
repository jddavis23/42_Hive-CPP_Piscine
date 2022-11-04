/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:52:52 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/04 13:20:30 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	int	num;
	static const int c_num = 8;
	public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed(const int a);
	Fixed(const float a);
	Fixed & operator = (const Fixed &a);
	int	operator > (const Fixed &f);
	int	operator < (const Fixed &f);
	int	operator <= (const Fixed &f);
	int	operator >= (const Fixed &f);
	int	operator == (const Fixed &f);
	int	operator != (const Fixed &f);
	Fixed		operator * (const Fixed &f);
	Fixed		operator + (const Fixed &f);
	Fixed		operator - (const Fixed &f);
	Fixed		operator / (const Fixed &f);
	Fixed	&operator ++ ();
	Fixed	operator ++ (int);
	Fixed	&operator -- ();
	Fixed	operator -- (int);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator << (std::ostream& os, const Fixed &a);

#endif