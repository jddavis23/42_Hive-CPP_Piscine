/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:52:52 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/03 12:21:49 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	int	num;
	static const int c_num = 8;
	public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed & operator = (const Fixed &a);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif